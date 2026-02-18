#include <Servo.h>
Servo s;
void setup() {
  s.attach(9);
}
void loop() {
  s.writeMicroseconds(1000);
  delay(2000);
  s.writeMicroseconds(2000);
  delay(2000);
}