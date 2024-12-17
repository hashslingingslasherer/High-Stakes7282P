/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\epieper                                          */
/*    Created:      Thu Oct 31 2024                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----
#include "main.h"
using namespace vex;

//PORTS ARE CURRENTLY NOT CORRECT, ATTACHED ONE TO PORT 12 FOR TESTING PURPOSES
int main() {
  vexDisplayPrintf(10,10,10,"sigma sigma rizz skibid rightGroup");
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit(); //behind the scenes essential
  Competition.autonomous(autonomousControl);
  Competition.drivercontrol(driverControl);
  
  driveForward(); //test function for connection
}
