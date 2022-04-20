#include "Bodensensor.h"

Bodensensor::Bodensensor(int linePin) {
  pinMode(linePin, INPUT);
  _linePin = linePin;
  // AD-Wandler einschwingen lassen
  analogRead(linePin);
  analogRead(linePin);
}

unsigned int Bodensensor::getLineValue() {
  return analogRead(_linePin);
}
