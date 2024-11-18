/* This sketch will be used to create a cycle where a light fades up
from completely off to completely on over the course of two seconds*/

// Initialize variables
int y;

void setup()
{
    // Set up the LED pin
    pinMode (6, OUTPUT);
    
    // Fade LED from 0 to full power over one second
    for (int y = 0; y <= 255;y=y+1 ){
        analogWrite (6, y);
        delay (5);
    }
    
    // Fade LED from full power to 0 over one second
    for (y = 255; y >= 0; y = y - 1){
        analogWrite (6, y);
        delay (5);
    }

}

void loop()
{

}
