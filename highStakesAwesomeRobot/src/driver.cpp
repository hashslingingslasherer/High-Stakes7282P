#include "vex.h"
#include "utils.h"

void pneumat()
{

  grabber.set(true);
}
void pneumatOff()
{
  grabber.set(false);
}
void intakeUp()
{
while(Controller.ButtonR1.pressing())
{
intake.spin(forward,90,percent);
}
}
void intakeDown()
{
while(Controller.ButtonR2.pressing())
{
intake.spin(forward,-90,percent);
}
}

void rightSpin()
{
  rightGroup.spin(forward, Controller.Axis2.position(), percent); //right group spins
} 
void leftSpin()
{
  leftGroup.spin(forward, Controller.Axis3.position(), percent); //left group spins
}
void driverControl()
{
  Brain.Screen.print("driver");
  Controller.ButtonL1.pressed(pneumat);
  Controller.ButtonL1.released(pneumatOff);
  Controller.Axis1.changed(rightSpin);
  Controller.Axis3.changed(leftSpin);
  Controller.ButtonR1.pressed(intakeUp);
  Controller.ButtonR2.pressed(intakeDown);
 /* while(1)
  {
    if(Controller.ButtonR1.RELEASED && Controller.ButtonR2.RELEASED)
    {
      intake.stop();
    }
  }
}*/}
void driveForward(){
  rightGroup.spinFor(1,sec);
}