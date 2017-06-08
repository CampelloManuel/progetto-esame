/* 
 * esempio di controllo degli accessori di arduino
 * servomotore & motore stepper (se metti il bool == true)
 * display 16x2
 */

#include <Stepper.h>
#include <Servo.h>
#include <LiquidCrystal.h>
#include <IRremote.h>

const bool motori_on = false;
int count = 0;
Stepper servoMotore = Stepper(20, 11, 12); // pin collegati
Servo motoreServo; // esempio con servomotore
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);	//pin collegati
// variabili per telecomando IR
const int pin_ricevitore = 11;	
int valore_ricevuto_IR = 0;
IRrecv ricevitore(pin_ricevitore);
decode_results risultati;

void setup()
{
	Serial.begin(9600);           
	Serial.println("La comunicazione è attiva");
	lcd.begin(16, 2);	//righe & colonne del display
	lcd.print("Prova display");
	
	servoMotore.setSpeed(30);
	motoreServo.attach(A1);
	ricevitore.enableIRIn();
}

void loop()
{
	if ( motori_on ) {
		servoMotore.step(count % 20);
		motore_servo.write(count % 180); //non sono permesse rotazioni > di 180°
	}
	lcd.setCursor(0, 1);	//posizione 0 riga 1 (inizio 2° riga)
	lcd.print(conto % 50);
	
	if ( ricevitore.decode(&risultati) ) {
		valore_ricevuto_IR = risultati.value;
		ricevitore.resume();
    }
	Serial.println(valore_ricevuto_IR);
	
	count++;
	delay(250);
}