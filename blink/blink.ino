/*
  Blink LED at a changing delay
*/

// Pin where the LED is connected
int led = 7;

// Delay before the LED blinks
int del = 1000; // in milliseconds

// Change in the delay
int change = -100; // in milliseconds

// The setup function runs once when you press reset or power the board
void setup() {
  pinMode(led, OUTPUT);
}

// The loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH); // turn on the LED
  delay(del);
  digitalWrite(led, LOW); // turn off the LED
  delay(del);

  del += change;
  switch (del) {
    case 0:
    case 1000:
      change = -change; // When reaching one of the limits, reverse the change
      break;
  }
}
