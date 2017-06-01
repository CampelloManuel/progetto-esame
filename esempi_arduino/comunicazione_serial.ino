int conto;

void setup()                    
{
  Serial.begin(9600);           
  Serial.println("Comunicazione attiva");
  conto = 0;
}

void loop()
{
	if (conto % 100 == 12) Serial.println(conto);
	conto++;
}