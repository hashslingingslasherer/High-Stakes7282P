#include "vex.h"
#include "utils.h"

double vel = 30;
double moveMulti=1;
double rmulti=1; //roughly based on the coefficient of friction of the floor
double red1=-1;
//BLUE RIGHT SIDE
void crappyAuton()
{
    Drivetrain.setDriveVelocity(90,percent);
    Drivetrain.driveFor(-600,mm,true);
    grabber.open();
    Drivetrain.driveFor(600,mm);
}
void autonomousBlueLeft()
{
Brain.Screen.clearLine();
Brain.Screen.print("ABL RUN");
//drive forward
Drivetrain.setDriveVelocity(90,percent);
Drivetrain.setStopping(hold);
//backwards
Drivetrain.driveFor(-1350,mm,true);
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
Drivetrain.driveFor(-100,mm,true); //dependent
//turn left
Drivetrain.turnFor(90,degrees,true);
//facing north

grabber.close();
Drivetrain.turnFor(-90,degrees);
Drivetrain.driveFor(-500,mm);
grabber.open();
Drivetrain.driveFor(-100,mm);
Drivetrain.turnFor(90, degrees);
intake.spinFor(2,sec);
Drivetrain.driveFor(500,mm,true);




}

void autonomousRedRight()
{
Brain.Screen.clearLine();
Brain.Screen.print("ARR RUN");
//drive forward
Drivetrain.setDriveVelocity(90,percent);
Drivetrain.setStopping(hold);
//backwards
Drivetrain.driveFor(-1350,mm,true);
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
Drivetrain.driveFor(-100,mm,true); //dependent
//turn left
Drivetrain.turnFor(90*red1,degrees,true);
//facing north

grabber.close();
Drivetrain.turnFor(-90*red1,degrees);
Drivetrain.driveFor(-500,mm);
grabber.open();
Drivetrain.driveFor(-100,mm);
Drivetrain.turnFor(90*red1, degrees);
intake.spinFor(2,sec);
Drivetrain.driveFor(500,mm,true);


}
void autonomousBlueRight()
{
Brain.Screen.clearLine();
Brain.Screen.print("ABR RUN");
Drivetrain.driveFor(-950,mm);
grabber.open();
intake.spinFor(2,seconds);
Drivetrain.driveFor(-200,mm);
Drivetrain.turnFor(90,degrees);
intake.spinFor(5,seconds);
Drivetrain.driveFor(400,mm);
Drivetrain.turnFor(160,degrees);
Drivetrain.driveFor(-400,mm);
}
void autonomousRedLeft()
{
Brain.Screen.clearLine();
Brain.Screen.print("ARL run");
Drivetrain.driveFor(-950,mm);
grabber.open();
intake.spinFor(2,seconds);
Drivetrain.driveFor(-200,mm);
Drivetrain.turnFor(90*red1,degrees);
intake.spinFor(5,seconds);
Drivetrain.driveFor(400,mm);
Drivetrain.turnFor(160*red1,degrees);
Drivetrain.driveFor(-400,mm);
}