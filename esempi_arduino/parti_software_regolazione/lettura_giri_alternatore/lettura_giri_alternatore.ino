/* su pin GND: cavetto arancione-bianco da ethernet
 * su pin A0: cavetto arancione da ethernet
 */
int val = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(A0);
  Serial.print("Valore (su 1024): ");
  Serial.println(val);
  delay(500);
}
