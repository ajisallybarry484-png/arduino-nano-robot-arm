#include <Servo.h>

Servo baseServo;
Servo armServo;

void setup() {
  baseServo.attach(9);
  armServo.attach(10);

  baseServo.write(90);
  armServo.write(90);
}

void loop() {

}


