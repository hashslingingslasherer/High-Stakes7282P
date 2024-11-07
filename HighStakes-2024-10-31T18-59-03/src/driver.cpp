#include "vex.h"
#include "utils.h"
void driverControl()
{
  while(Competition.isDriverControl())
  {
    rightGroup.spin(forward, Controller.Axis1.position(), percent);
    leftGroup.spin(forward, Controller.Axis3.position(), percent);
  }
  
}