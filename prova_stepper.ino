#include <Stepper.h>

/* Use File->Load Prog to
   load a different Program
*/

int count;
Stepper motore = Stepper(20, 11, 12);

void setup()
{
	count=0;
	motore.setSpeed(30);
}

void loop()
{
	count=count+1;
	delay(100);
	motore.step(count % 20);
}
