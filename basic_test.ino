/* Linear Potentiometer B1K~B1M (B1K~B1M) [S070] : http://rdiot.tistory.com/193 [RDIoT Demo] */

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // LCD2004
int pin=8;

void setup()
{
  lcd.init();  // initialize the lcd 
  lcd.backlight();
  lcd.print("start LCD2004");
  pinMode(pin, OUTPUT);

  digitalWrite(pin,HIGH);
  delay(1000);

  lcd.clear();
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("S070:B1K~B1M");

  lcd.setCursor(0,1);
  lcd.print("analog=" + (String)analogRead(A0) + " ");
}
