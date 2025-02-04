#include "vex.h"
#include "utils.h"
void (*functionPointer)()=nullptr;
bool active=true;
int num=0;
void increment(){
num++;
if(num>4)
num=1;
}
void preCheck()
{
    if(active)
    {
    increment();
        switch(num)
        {
        case 1 :
{
            functionPointer = &autonomousBlueLeft;
            Brain.Screen.clearLine();
            Brain.Screen.print("auton blue left");
            break;
}
        case 2 :{

                functionPointer = &autonomousBlueRight;
                Brain.Screen.clearLine();
                Brain.Screen.print("auton blue right");
                break;
        }
      
        case 3:{
                functionPointer = &autonomousRedRight;
                Brain.Screen.clearLine();
                Brain.Screen.print("auton red right");
                break;
        }

        case 4:{
                functionPointer = &autonomousRedLeft;
                Brain.Screen.clearLine();
                Brain.Screen.print("auton red left");
            }




}
}
}
void preauton()
{
    
    Brain.Screen.pressed(preCheck);
    
   
}
