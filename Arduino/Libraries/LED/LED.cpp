#include "LED.h"

LED::LED(int ledPin) {
  pinMode(ledPin, OUTPUT);
  _ledPin = ledPin;
}

void LED::schalten(bool zustand) {
  digitalWrite(_ledPin, zustand);
}

void LED::ausschalten() {
  digitalWrite(_ledPin, false);
}

void LED::einschalten() {
  digitalWrite(_ledPin, true);
}
