//
//    FILE: printCharArrayDynamicSize.ino
//  AUTHOR: Rob Tillaart
// PURPOSE: demo setting size of internal buffer
//     URL: https://github.com/RobTillaart/PrintCharArray


#include "PrintCharArray.h"

PrintCharArray ps(100);


void setup()
{
  Serial.begin(115200);
  Serial.println(__FILE__);

  Serial.println(ps.available());
  ps.println("Hello World");
  Serial.println(ps.available());
  ps.println(3.14159265, 4);
  Serial.println(ps.available());
  Serial.println(ps.getBuffer());

  ps.clear();
  ps.println(3.14159265, 4);
  ps.println("Hello World");
  Serial.println(ps.getBuffer());
}


void loop()
{
}


// -- END OF FILE --

