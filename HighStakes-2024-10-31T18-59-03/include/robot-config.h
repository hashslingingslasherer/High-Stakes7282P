#pragma once
using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern motor topLeft;
extern motor midLeft;
extern motor backLeft;
extern motor topRight;
extern motor midRight;
extern motor backRight;
extern motor_group leftGroup;
extern motor_group rightGroup;
/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
extern competition Competition;
void autonomousControl();
void driverControl();
void  vexcodeInit( void );