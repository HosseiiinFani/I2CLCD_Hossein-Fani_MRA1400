#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

byte Custom_char[8] =
{
0b00000,
0b00000,
0b01010,
0b00000,
0b10001,
0b01110,
0b00000,
0b00000
};

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();

  lcd.createChar(0, Custom_char);

  lcd.home();
}

void loop() {
  // put your main code here, to run repeatedly:
  
  lcd.home();
  lcd.write(0);
  
}
