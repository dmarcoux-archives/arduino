/* 
  Blink a RGB LED with PWM (Pulse Width Modulation)  
*/

// Pins where the LED is connected
int redPin = 11;
int greenPin = 10;
int bluePin = 9;

// uncomment this line if using a Common Anode LED
// #define COMMON_ANODE

// setColor has an optional parameter, so it must declared before being used
void setColor(int red, int green, int blue, int del = 1000)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue); 
  delay(del); 
}

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  setColor(255, 0, 0);  // red
  setColor(0, 255, 0);  // green
  setColor(0, 0, 255);  // blue
  setColor(255, 255, 0);  // yellow
  setColor(80, 0, 80);  // purple
  setColor(0, 255, 255);  // aqua
}
