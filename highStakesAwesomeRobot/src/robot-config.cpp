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
motor topLeft = motor(PORT1,true);
motor midLeft = motor(PORT2,true);
motor backLeft = motor(PORT3,true);
motor topRight = motor(PORT12,false);
motor midRight = motor(PORT5,false);
motor backRight= motor(PORT6,false);  
motor_group leftGroup = motor_group(topLeft,midLeft,backLeft);
motor_group rightGroup = motor_group(topRight,midRight,backRight);
motor_group allMotors = motor_group(topLeft,midLeft,backLeft,topRight,midRight,backRight);
optical colorSensor = optical(PORT8);
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
