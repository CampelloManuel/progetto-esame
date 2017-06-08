/*
 * SCHEMA DI COLLEGAMENTO:
 * pin -> funzione
 * -----------------
 * A0 -> "contagiri" motore
 * 2 -> finecorsa valvola a 3 vie
 * 3 -> commutazione relè attivazione valvola a 3 vie (LOW = acceso)
 * 5 -> comando servomotore (per accelerazione motore piaggio)
 * 6 -> segnale a scatola relè di alimentazione
 */
#include <Servo.h>

#define DEBUG // commentare in fase di distribuzione
long conto = 0;

const short pin_ntc = A0; // per la sonda ntc: pin & valore letto
int l_ntc = 0;
const short pin_rpm = A0; // per il contatore di giri: pin & valore letto
int l_rpm = 0;
Servo servo;
int pos_servo = 0;
const short pin_pompa = 2;  // collegamento modulo relè per pompa
const short pin_valvola = 4;  // collegamento modulo relè per valvola
const short pin_servo = 6;  // collegamento per servomotore, su pin PWM

void setup() {
  pinMode(pin_ntc,INPUT);
  pinMode(pin_rpm,INPUT);
  servo.attach(pin_servo);
  Serial.begin(9600);
}

void loop() {
  // riceve segnale a 5v da termoresistenza e contagiri
  l_ntc = analogRead(pin_ntc);
  l_rpm = analogRead(pin_rpm);
  #ifdef DEBUG
  Serial.print("Valore sonda ntc: ");
  Serial.println(l_ntc);
  Serial.print("Valore sonda rpm: ");
  Serial.println(l_rpm);
  #endif
  // attivazione servomotore, pompa e valvola a 3 vie
  servo.write( min(pos_servo, 180) );
  if (true) digitalWrite(pin_pompa,HIGH);
  if (true) digitalWrite(pin_valvola,HIGH);

  conto++;
  delay(350);
}
