#include "vex.h"
#include "utils.h"

double vel = 30;
double moveMulti=1;
double rmulti=1; //roughly based on the coefficient of friction of the floor
double red1=-1;
//BLUE RIGHT SIDE
void autonomousBlueRight()
{
//drive forward
Drivetrain.setDriveVelocity(90,percent);
Drivetrain.setStopping(hold);
//backwards
Drivetrain.driveFor(-2000,mm,true);
//clamp down
grabber.open();
intake.spin(forward);
//drive backwards assuming a tug of war
Drivetrain.setDriveVelocity(100,percent);
Drivetrain.drive(forward);
Drivetrain.setStopping(coast);
//assume that they will be driving backwards for less than 2 seconds
//and we'll make them get an infraction
wait(.8,seconds);
Drivetrain.setDriveVelocity(30, percent);
wait(1.2,seconds);
Drivetrain.stop();
intake.stop();
wait(.4, seconds);
//run into wall at some point
Drivetrain.setStopping(hold);
// return to normalcy

Drivetrain.setDriveVelocity(90,percent);
//drive forward
Drivetrain.driveFor(-250,mm,true); //dependent
//turn left
Drivetrain.turnFor(90,degrees,true);
//facing north

grabber.close();

intake.spinFor(2,sec);
Drivetrain.driveFor(500,mm,true);

Drivetrain.driveFor(-500,mm,true);
Drivetrain.turnFor(-90,deg,true);
Drivetrain.driveFor(-500,mm,true);
grabber.open();
intake.spin(forward);
wait(1,seconds);
Drivetrain.turnFor(-45,degrees);
Drivetrain.driveFor(500,mm,true);



}

void autonomousRedLeft()
{
    Drivetrain.setDriveVelocity(90, percent);
Drivetrain.setStopping(hold);
//backwards
Drivetrain.driveFor(-2000, mm, true);
//clamp down
grabber.open();
intake.spin(forward);
//drive backwards assuming a tug of war
Drivetrain.setDriveVelocity(100, percent);
Drivetrain.drive(forward);
Drivetrain.setStopping(coast);
//assume that they will be driving backwards for less than 2 seconds
//and we'll make them get an infraction
wait(.8, seconds);
Drivetrain.setDriveVelocity(30, percent);
wait(1.2, seconds);
Drivetrain.stop();
intake.stop();
wait(.4, seconds);
//run into wall at some point
Drivetrain.setStopping(hold);
// return to normalcy

Drivetrain.setDriveVelocity(90, percent);
//drive forward
Drivetrain.driveFor(-250, mm, true); //dependent
//turn left
Drivetrain.turnFor(90 * red1, degrees, true);  // Modified line
//facing north

grabber.close();

intake.spinFor(2, sec);
Drivetrain.driveFor(500, mm, true);

Drivetrain.driveFor(-500, mm, true);
Drivetrain.turnFor(-90 * red1, deg, true);  // Modified line
Drivetrain.driveFor(-500, mm, true);
grabber.open();
intake.spin(forward);
wait(1, seconds);
Drivetrain.turnFor(-45 * red1, degrees);  // Modified line
Drivetrain.driveFor(500, mm, true);

}