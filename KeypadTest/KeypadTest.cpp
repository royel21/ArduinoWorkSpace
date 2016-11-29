// Do not remove the include below
#include "KeyPadTest.h"
#include "TM1637Display.h"
#define TEST_DELAY 500
TM1637Display display(3, 2);

void setup()
{
  pinMode(2, INPUT);
  digitalWrite(2, HIGH);

//  uint8_t data2[] =
//        { display.encodeDigit(3), display.encodeDigit(4), display.encodeDigit(5),
//            display.encodeDigit(9) };
//  display.setSegments(data2);
}

void loop()
{

  pinMode(2, OUTPUT);
  delay(10);
  pinMode(2, INPUT);
  delay(10);
}
