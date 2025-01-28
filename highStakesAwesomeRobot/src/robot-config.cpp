#include "vex.h"
#include "utils.h"
using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors

//Movement Control Motors and Motor Groups
controller Controller = controller(primary);
motor topLeft = motor(PORT12,true);
motor midLeft = motor(PORT13,true);
motor backLeft = motor(PORT14,true);
motor topRight = motor(PORT16,false);
motor midRight = motor(PORT17,false);
motor backRight= motor(PORT18,false);  
motor_group leftGroup = motor_group(topLeft,midLeft,backLeft);
motor_group rightGroup = motor_group(topRight,midRight,backRight);
motor_group allMotors = motor_group(topLeft,midLeft,backLeft,topRight,midRight,backRight);
optical colorSensor = optical(PORT8);
pneumatics grabber=pneumatics(Brain.ThreeWirePort.A);
//Intake Motors
drivetrain Drivetrain=drivetrain(leftGroup,rightGroup,259.338473,307.5,266,mm,1);
motor intake = motor(PORT7, true); //press, intake starts (direction might have to change)


competition Competition= competition();



// define variable for remote controller ena
// VEXcode generated functionsble/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {

}


//testing velocities and motors
