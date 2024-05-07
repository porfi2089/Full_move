#include "LEDControl.h"

// Constructor
LEDControl::LEDControl(int pin) {
  _pin = pin;
  pinMode(_pin, OUTPUT);
  _isOn = false;
}

// Function to turn on the LED
void LEDControl::turnOn() {
  digitalWrite(_pin, HIGH);
  _isOn = true;
}

// Function to turn off the LED
void LEDControl::turnOff() {
  digitalWrite(_pin, LOW);
  _isOn = false;
}

// Function to toggle the LED state
void LEDControl::toggle() {
  if (_isOn) {
    turnOff();
  } else {
    turnOn();
  }
}

// Function to check if the LED is on
bool LEDControl::isOn() {
  return _isOn;
}
