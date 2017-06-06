// riceve segnale in tensione a 5v dalla termoresistenza e dal contatore di giri

#define DEBUG
long conto = 0;
// per la sonda ntc: pin & valore letto
const short pin_ntc = A0; 
int l_ntc = 0;
// per il contatore di giri: pin & valore letto
const short pin_rpm = A1;
int l_rpm = 0;

void setup() {
  pinMode(pin_ntc,INPUT);
  pinMode(pin_rpm,INPUT);
  Serial.begin(9600);
}

void loop() {
  l_ntc = analogRead(pin_ntc);
  l_rpm = analogRead(pin_rpm);
  #ifdef DEBUG
  Serial.print("Valore sonda ntc: ");
  Serial.println(l_ntc);
  Serial.print("Valore sonda rpm: ");
  Serial.println(l_rpm);
  #endif
  delay(350);
  conto++;
}
