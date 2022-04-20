#pragma once

#include <Arduino.h>

const int LIJN_SEN1 = A6;
const int LIJN_SEN2 = A7;

class Bodensensor {
public:
  Bodensensor(int linePin);
  unsigned int getLineValue();
private:
  int _linePin;
};
