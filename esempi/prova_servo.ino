/*
 * esempio_servo.ino
 * aziona un motore servo
 * la velocita' e' regolata dal numero di esecuzioni della funzione loop()
 */

//modificato da client desktop github

#include <Servo.h>

int count;
int valore_cursore;
Servo motore_servo;

void azionamento_servo(int posizione, int scala);

void setup()
{
	count=0;
	motore_servo.attach(A1);
	pinMode(A5, INPUT);
}

void loop()
{
	count++;
	valore_cursore = analogRead(A5);
	valore_cursore = map(valore_cursore,0,1024,0,500);
	azionamento_servo(count,valore_cursore);

}

void azionamento_servo(int posizione, int scala) {
	//regola il servo sulla posizione indicata
	//aspetta un tempo proporzionale al valore del cursore
	delay(scala);
	motore_servo.write(posizione % 180); //non sono permessi valori superiori a 180�
}
