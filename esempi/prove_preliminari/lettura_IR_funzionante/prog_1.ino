#include <IRremote.h>
#include <LiquidCrystal.h>

int conto;
const int pin_ricevitore = 2;
const int pin_led = A5;
IRrecv ricevitoreIR(pin_ricevitore);
decode_results risultati_decodifica; 

void setup() {
  conto = 0;
  pinMode(pin_led,OUTPUT);
  Serial.begin(9600);
  Serial.println("Log: ");
  ricevitoreIR.enableIRIn();

}

void loop() {
  if ( ricevitoreIR.decode(&risultati_decodifica) )
  {
    Serial.println( risultati_decodifica.value, HEX);
    ricevitoreIR.resume();
  }


  digitalWrite(7,HIGH);
  
  delay(500);
  conto++;
}

