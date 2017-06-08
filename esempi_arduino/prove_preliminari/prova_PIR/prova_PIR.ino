const int pin_pir = 11;
int valore = 0;

void setup() {
  pinMode(pin_pir, INPUT);
  Serial.begin(9600);
}

void loop() {
  valore = digitalRead(pin_pir);
  Serial.println(valore);
}
