#include "vex.h"
#include "utils.h"
void intakeUp()
{
intake.spin(forward,90,percent);
}
void intakeDown()
{
intake.spin(forward,-90,percent);
}
void rightSpin()
{
  rightGroup.spin(forward, Controller.Axis1.position(), percent); //right group spins
}
void leftSpin()
{
  leftGroup.spin(forward, Controller.Axis3.position(), percent); //left group spins
}
void driverControl()
{
  Controller.Axis1.changed(rightSpin);
  Controller.Axis3.changed(leftSpin);
  Controller.ButtonR1.pressed(intakeUp);
  Controller.ButtonR2.pressed(intakeDown);
  
}