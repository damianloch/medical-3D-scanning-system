#include <Servo.h>
Servo s;

void setup() {
  s.attach(9);
}

void loop() {
  s.writeMicroseconds(1563);
}
