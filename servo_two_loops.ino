#include <Servo.h>
Servo s;

void setup() {
  s.attach(9);
}

void loop() {
  for (int loop = 0; loop < 2; loop++) {
    s.writeMicroseconds(1596);
    delay(8000);
  }
  
  s.writeMicroseconds(1530);
  delay(1000);
}
