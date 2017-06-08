// prova di comando dei vari attuatori

#include <Servo.h>

Servo servo;
long conto = 0;
int pos_servo = 0;
//collegamento al modulo con relè per la pompa
const short pin_pompa = 2;
//collegamento al modulo con relè per la valvola
const short pin_valvola = 4;
//collegamento per il servomotore, su un pin PWM
const short pin_servo = 6;

void setup() {
  Serial.begin(9600);
  servo.attach(pin_servo);
}

void loop() {
  //Serial.println("");
  pos_servo = 123;
  // comando per il servomotore
  pos_servo = min(pos_servo, 180);
  servo.write(pos_servo);
  // attivazione pompa
  if (true) digitalWrite(pin_pompa,HIGH);
  // attivazione valvola a 3 vie
  if (true) digitalWrite(pin_valvola,HIGH);
  delay(100);
}
