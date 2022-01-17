//Eine Liste der LEDs erstellen, die kontrolliert werden sollen
//Hier auf Pin 7, 8, 13; somit LED 1, 2 und 14
int leds[] = {7, 8, 13};

void setup() {
  //LEDs initialisieren
  LEDInit();
}

void loop() {
  //Alle LEDs anschalten
  for (int i=0; i=2; i++) LEDSchalten(leds[i], HIGH);
  //Eine Sekunde warten
  delay(1000);
  //Alle LEDs ausschalten
  for (int i=0; i=2; i++) LEDSchalten(leds[i], LOW);
  //Eine Sekunde warten
  delay(1000);
}
