// Do not remove the include below
#include "KeyPadTest.h"

#include "Keypad.h"
#include "LiquidCrystal_I2C.h"
const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = { { '1', '2', '3', 'A' }, { '4', '5', '6', 'B' },
    { '7', '8', '9', 'C' }, { '*', '0', '#', 'D' } };

byte rowPins[ROWS] = { 22, 24, 26, 28 }; //connect to the row pinouts of the keypad
byte colPins[COLS] = { 30, 32, 34, 36 }; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup()
{
  lcd.init();
  lcd.init();
  Serial.begin(115200);
}

void loop()
{

  char customKey = customKeypad.getKey();

  if (customKey)
  {
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("keyPressed:");
    lcd.print(customKey);
    Serial.println(customKey);
  }
}
