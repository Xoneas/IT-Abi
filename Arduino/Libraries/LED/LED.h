#pragma once

#include <Arduino.h>

const int LED_1 = 7;
const int LED_2 = 8;
const int LED_14 = LED_BUILTIN;

class LED {
public:
  LED(int pin);
  void schalten(bool zustand);
  void ausschalten();
  void einschalten();
private:
  int _ledPin;
};
