#include "vex.h"
#include "utils.h"

double vel = 30;

void autonomousControl()
{
allMotors.setVelocity(30, percent);
allMotors.spinFor(forward,5,rotationUnits::rev,true);
}