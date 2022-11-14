#include <LiquidCrystal.h>

LiquidCrystal lcd(6, 7, 8, 9, 10, 11);

void setup(){
  lcd.begin(16, 2);
  
  lcd.print("Ola Mundo");
}

void loop(){
  
  }
