#include "pwm_lib.h"

//Creating an object to invoke the necessary method
pwm pwmc;
void setup() {
}

void loop() {
    //Invoking a function which aids the users in easily configuring the PWM output on the pins
    pwmc.pwmoutput(2,127);
}
