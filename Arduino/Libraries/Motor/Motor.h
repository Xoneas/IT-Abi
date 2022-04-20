#pragma once

#include <Arduino.h>

const int PWM1_L = 3;
const int PWM1_R = 5;
const int PWM2_L = 10;
const int PWM2_R = 9;

class Motor {
public:
  Motor(int anschlussVor, int anschlussRueck);
  void setMotorPower(int pwm);
  void leerlauf();
private:
  int _anschlussVor;
  int _anschlussRueck;
};
