/* This example demonstrates basic things like digital read write , set pinmode , analog write */
#include "easylib.h"
void setup(){
set(13,OUTPUT); //set is used to define pinMode in arduino in it OUTPUT or 1 can be used for out signals and 0 or INPUT can be used for incoming signals.
set(13,1); // both these codes (line 4 and 5) will work the same.
//there is no need for set in this code as les on and off itslef defines its pinmode but are included for reference
}
void loop(){
ledon();
pause(0.5);
ledoff();
}
