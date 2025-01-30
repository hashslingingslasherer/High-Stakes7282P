#include "vex.h"
#include "utils.h"
void (*functionPointer)()=nullptr;
void preauton()
{
    while(1)
    {
        if(Controller.ButtonL1.pressing())
        {
            if(functionPointer!=&autonomousBlueLeft)
            {
            functionPointer=&autonomousBlueLeft;
            Controller.Screen.clearLine();
            Controller.Screen.print("autonBlueRight selected");
            }
        }
        if(Controller.ButtonL2.pressing())
        {
            if(functionPointer!=&autonomousBlueRight)
            {
                functionPointer=&autonomousBlueRight;
                Controller.Screen.clearLine();
                Controller.Screen.print("auton blue right");
            }
        }
        if(Controller.ButtonR1.pressing())
        {
            if(functionPointer!=&autonomousRedRight)
            {
                functionPointer=&autonomousRedRight;
                Controller.Screen.clearLine();
                Controller.Screen.print("auton red right");
            }
        }
        if(Controller.ButtonR2.pressing())
        {
            if(functionPointer!=&autonomousRedLeft)
            {
                functionPointer=&autonomousRedLeft;
                Controller.Screen.clearLine();
                Controller.Screen.print("auton red left");
            }
        }
    }

}
