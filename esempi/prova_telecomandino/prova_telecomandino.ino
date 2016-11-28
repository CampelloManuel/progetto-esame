#include <IRremote.h>

int conto;
const int pin_ricevitore = 11;
int valore_ricevuto = 0;
IRrecv ricevitore(pin_ricevitore);
decode_results risultati;

void setup() {
  Serial.begin(9600);           
  Serial.println("Comunicazione attiva");
  conto = 0;
  ricevitore.enableIRIn();
}

void loop() {
  if (ricevitore.decode(&risultati)) {
      valore_ricevuto = risultati.value;
      
      ricevitore.resume();
    }
  Serial.println(valore_ricevuto);
  delay(250);
  conto++;
}
