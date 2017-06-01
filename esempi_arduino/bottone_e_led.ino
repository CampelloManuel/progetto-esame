int count;
const int pin_led = 03;
const int pin_bottone = 04;
int stato_bottone = 0;

void setup()
{
	count = 0;
	pinMode(pin_led, OUTPUT);
	pinMode(pin_bottone, INPUT);
	
}

void loop()
{
	count++;
	stato_bottone = digitalRead(pin_bottone);
	if (stato_bottone) digitalWrite(pin_led, HIGH);
		else digitalWrite(pin_led, LOW);
			delay(250);
}
