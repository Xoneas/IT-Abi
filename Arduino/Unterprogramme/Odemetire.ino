//Unterprogramm Odometrie

#include <EnableInterrupt.h>    //enableInterrupt einfügen für benötigte Befehle


volatile int zaehlerlinks = 0;  //Hilfsvariable für Zählung links
volatile int zaehlerrechts = 0; //Hilfsvariable für Zählung rechts
volatile int WS_LEFT = A0;      //Pin für WS left
volatile int WS_RIGHT = A1;     //Pin für WS Right
volatile float WegLinksCM=0;
volatile float WegRechtsCM=0;


void zaehlFunktionlinks()  //Funktionen fürs hochzählen
{
  zaehlerlinks ++;
}

void zaehlFunktionrechts()
{
  zaehlerrechts ++; 
}

void odoInit()
{
  pinMode(WS_LEFT,INPUT_PULLUP);
  pinMode(WS_RIGHT,INPUT_PULLUP);
  enableInterrupt(WS_LEFT,  zaehlFunktionlinks, FALLING);    //Falling bedeutet das der Interrupt dann ausgelöst wird wenn der pin von high auf low wechselt
  enableInterrupt(WS_RIGHT, zaehlFunktionrechts, FALLING);  //enableInterrupt wird hier für den Befehl FALLING benötigt
}

//Werte wiedergeben
int getInterruptLinks()
{ 
  return zaehlerlinks;  
}


int getInterruptRechts()
{
  return zaehlerrechts; 
}

void odoReset()
{
  zaehlerlinks = 0;
  zaehlerrechts = 0;
}

float getWegLinksCM()
{
 WegLinksCM=0.59*zaehlerlinks;
 return WegLinksCM;
}

float getWegRechtsCM()
{
  WegRechtsCM=0.59*zaehlerrechts;
  return WegRechtsCM;
}
