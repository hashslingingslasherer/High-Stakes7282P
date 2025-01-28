#include "vex.h"
#include "utils.h"
void (*functionPointer)()=nullptr;
void preauton()
{
    while(1)
    {
        if(Controller.ButtonL1.pressing())
        {
            if(functionPointer!=&autonomousBlueRight)
            {
            functionPointer=&autonomousBlueRight;
            Controller.Screen.clearLine();
            Controller.Screen.print("autonBlueRight selected, PLACE READY TO GRAB");
            }
        }
    }

}
