#include <Stepper.h>

int vel = 100;
int step = 200;

Stepper motor1(step,8,9,10,11);
Stepper motor2(step,4,5,6,7);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  //motor1.setSpeed(vel);
  //motor1.step(step);
  
  motor2.setSpeed(vel);
  motor2.step(step);
}
