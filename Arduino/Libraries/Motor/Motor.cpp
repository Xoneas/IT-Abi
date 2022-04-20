#include "Motor.h"

Motor::Motor(int anschlussVor, int anschlussRueck) {
  pinMode(anschlussVor, OUTPUT);
  pinMode(anschlussRueck, OUTPUT);
  _anschlussVor = anschlussVor;
  _anschlussRueck = anschlussRueck;
}

void Motor::setMotorPower(int pwm) {
  if (pwm) {
    if (pwm > 0) {
      // Vorwärts fahren
      analogWrite(_anschlussVor, pwm);
      pinMode(_anschlussRueck, OUTPUT);
      digitalWrite(_anschlussRueck, LOW);
    } else {
      // Rückwärts fahren
      pinMode(_anschlussVor, OUTPUT);
      digitalWrite(_anschlussVor, LOW);
      analogWrite(_anschlussRueck, abs(pwm));
    }
  } else {
    // Bremsen
    pinMode(_anschlussVor, OUTPUT);
    pinMode(_anschlussRueck, OUTPUT);
    digitalWrite(_anschlussVor, HIGH);
    digitalWrite(_anschlussRueck, HIGH);
  }
}

void Motor::leerlauf() {
  pinMode(_anschlussVor, OUTPUT);
  pinMode(_anschlussRueck, OUTPUT);
  digitalWrite(_anschlussVor, LOW);
  digitalWrite(_anschlussRueck, LOW);
}
