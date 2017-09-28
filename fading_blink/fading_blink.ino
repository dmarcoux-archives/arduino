/* 
  Blink a LED with PWM (Pulse Width Modulation)  
*/

// Pin where the LED is connected
int led = 9;

// Brightness of the LED
int brightness = 0;

// Fade the LED by this amount
int fadeAmount = 5;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  // Set the brightness of the LED
  analogWrite(led, brightness);

  // Change the brightness of the LED for the next run
  brightness += fadeAmount;

  // When reaching one of the limits, reverse the direction of the fading
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount;
  }

  delay(30);
}
