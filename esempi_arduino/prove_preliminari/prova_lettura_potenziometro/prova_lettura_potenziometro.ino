int conto;
int valore_letto = 0;
const int pin_led = 11;
void setup() {
  Serial.begin(9600);
  Serial.println("Prova: inizio");
  conto = 0;
  
}

void loop() {
  conto++;
  valore_letto = analogRead(A5);
  Serial.println(valore_letto);
  if (valore_letto >= 500) analogWrite(pin_led, 1020);
  if (valore_letto < 500) digitalWrite(pin_led, LOW); 
}
