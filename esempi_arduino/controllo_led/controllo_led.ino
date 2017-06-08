int conto = 0;
int valore_potenz = 0;
const int pin_bottone = 04;
int stato_bottone = 0;
const int pin_led = 11;
// impostare a piacere
const bool ctrl_con_btn = false;

void setup() {
	Serial.begin(9600);
	Serial.println("Prova: inizio");
	pinMode(pin_led, OUTPUT);
	pinMode(pin_bottone, INPUT);
}

void loop() {
	conto++;
	if ( !ctrl_con_btn ) {
		// il controllo avviene con potenziometro
		valore_potenz = analogRead(A5);
		Serial.println(valore_potenz);
		if (valore_potenz >= 500) analogWrite(pin_led, 1020);
		else digitalWrite(pin_led, LOW); 
	}
		
	if ( ctrl_con_btn ) {
		// il controllo avviene con bottone on/off
		stato_bottone = digitalRead(pin_bottone);
		if (stato_bottone) digitalWrite(pin_led, HIGH);
		else digitalWrite(pin_led, LOW);
	}
	delay(250);
}