#ifndef ULTRASCHALL_H
#define ULTRASCHALL_H

#include <Arduino.h>

class Ultraschall{
  public:
    //Konstruktor
    Ultraschall(int triggerPin, int echoPin,int taster);
    Ultraschall(int triggerPin, int echoPin);
    Ultraschall(int taster);
    //Operationen
    float getDistance();
    int getTriggerPin();
    int getEchoPin();
    int getTaster();
    int getAnzahlBetaetigt();
    void resetAnzahlBetaetigt();
    
  private: 
    int _triggerPin, _echoPin, _taster;
    static void setAnzahlBetaetigt();
};
#endif
