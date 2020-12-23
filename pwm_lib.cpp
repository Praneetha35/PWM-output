#include "Arduino.h"
#include "pwm_lib.h"

//Creating a function which aids the users in easily configuring the PWM output on the pins
void pwm::pwmoutput(int _pin,int _value){
 
    
       int pin=_pin;
       int value=_value;
  
       // setting PWM properties
       const int freq = 5000;   
       const int resolution = 8;
       
       //allocating channel 0 for all the pins
       int led_channel = 0;
       
       //configuring LED PWM functionalitites
       ledcSetup (led_channel,freq,resolution);
       ledcAttachPin(pin,led_channel);
       
       //Changing the brightness of the LED with the PWM value given by the user
       ledcWrite (led_channel,value);
       delay(15);

    
}
    
