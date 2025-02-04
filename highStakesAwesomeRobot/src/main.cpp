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
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit(); //behind the scenes essential
  //while(Competition.isEnabled()==false)
  //{
  //  driverControl();
  //}
  
  
  Brain.Screen.setCursor(1,1);

  Competition.drivercontrol(driverControl);
  preauton();
  Brain.Screen.print("DO PREAUTON");
  wait(10,sec);
  active=false;
  Brain.Screen.print(" <----------PREAUTON SELECTED");
  Competition.autonomous(functionPointer);


  driveForward(); //test function for connection
}
