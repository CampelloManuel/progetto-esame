#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  //pin collegati al display
int conto;

void setup() {
  lcd.begin(16, 2); //righe & colonne del display
  lcd.print("Display-prova");
  conto = 0;
}

void loop() {
  lcd.setCursor(0, 1);  //posizione 0 riga 1, ovvero inizio seconda riga
  lcd.print(conto / 50);
  conto++;
}
