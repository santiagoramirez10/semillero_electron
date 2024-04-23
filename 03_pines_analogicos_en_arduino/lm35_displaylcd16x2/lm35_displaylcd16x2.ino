#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int lm35=A0;
float temperatura;
void setup() {
  lcd.begin(16, 2);
}
void loop() {
  temperatura=(analogRead(lm35)*(0.49))-50;
  lcd.setCursor(0, 0);
  lcd.print("Temperatura:");
  lcd.setCursor(0, 1);
  lcd.print(temperatura);
}