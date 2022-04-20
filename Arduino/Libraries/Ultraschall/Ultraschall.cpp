#include "Ultraschall.h"
volatile int betaetigt = 0;
volatile unsigned long alteZeit=0, entprellZeit=50;
Ultraschall::Ultraschall(int triggerPin, int echoPin, int taster) 
{
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(taster, INPUT_PULLUP);
  _taster = taster;
  _triggerPin = triggerPin;
  _echoPin = echoPin;
  attachInterrupt(digitalPinToInterrupt(_taster), setAnzahlBetaetigt, FALLING);
}
Ultraschall::Ultraschall(int triggerPin, int echoPin) 
{
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  _triggerPin = triggerPin;
  _echoPin = echoPin;
}
Ultraschall::Ultraschall(int taster) 
{
  pinMode(taster, INPUT_PULLUP);
  _taster = taster;
  attachInterrupt(digitalPinToInterrupt(_taster), setAnzahlBetaetigt, FALLING);
}

float Ultraschall::getDistance()
{
  digitalWrite(_triggerPin, HIGH);  		//Trigger links auf 5V
  delayMicroseconds(20);     			//20us warten
  digitalWrite(_triggerPin, LOW);   		//Trigger links auf 0V
  while (digitalRead(_echoPin) == LOW); 	//warten, bis Echo links auf HIGH geht
  float zeit = micros();           		//Zeitmessung starten
  while (digitalRead(_echoPin) == HIGH); 	//warten, bis Echo links auf LOW ist
  float laufzeit = micros() - zeit; 		//Laufzeit ermitteln
  return laufzeit / 58;
}

int Ultraschall::getTriggerPin()
{
  return _triggerPin;
}

int Ultraschall::getEchoPin()
{
  return _echoPin;
}


int Ultraschall::getTaster()
{
  if (digitalRead(_taster) == LOW) //Taster an D2 betätigt
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void Ultraschall::setAnzahlBetaetigt() {
  if((millis() - alteZeit) > entprellZeit) { 
    betaetigt ++;
    alteZeit = millis(); // letzte Schaltzeit merken
  }   
}

void Ultraschall::resetAnzahlBetaetigt()
{
  betaetigt = 0;
}
int Ultraschall::getAnzahlBetaetigt()
{
  return betaetigt;
}
