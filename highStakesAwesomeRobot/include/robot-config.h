#pragma once
using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller;
extern motor topLeft;
extern motor midLeft;
extern motor backLeft;
extern motor topRight;
extern motor midRight;
extern motor backRight;
extern motor_group leftGroup;
extern motor_group rightGroup;
extern motor_group allMotors;
extern motor intake;
extern optical colorSensor;
extern drivetrain Drivetrain;
/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
