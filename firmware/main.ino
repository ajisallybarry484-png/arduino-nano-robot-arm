#include <Servo.h>
#include "config.h"

Servo baseServo;
Servo shoulderServo;
Servo elbowServo;
Servo gripperServo;

void setup() {
  baseServo.attach(BASE_SERVO_PIN);
  shoulderServo.attach(SHOULDER_SERVO_PIN);
  elbowServo.attach(ELBOW_SERVO_PIN);
  gripperServo.attach(GRIPPER_SERVO_PIN);

  baseServo.write(BASE_START_ANGLE);
  shoulderServo.write(SHOULDER_START_ANGLE);
  elbowServo.write(ELBOW_START_ANGLE);
  gripperServo.write(GRIPPER_START_ANGLE);
}

void loop() {
  // Add movement controls after testing each servo.
}
