void setup() {
  //Die serielle Schnittstelle aktivieren
  Serial.begin(9600);
}

void loop() {
  //Den Nutzer auffordern, die gefahrenen Kilometer einzugeben
  Serial.print("Gefahrene Kilometer eingeben: ");
  
  //Auf Daten der seriellen Schnittstelle warten
  while (!Serial.available());

  //Gefahrene Kilometer einlesen
  float kilometer = Serial.parseFloat();

  //Für bessere Lesbarkeit die Eingabe anzeigen
  Serial.println(kilometer);

  //Den Nutzer auffordern, die gefahrenen Kilometer einzugeben
  Serial.print("Verbrauchter Kraftstoff in Liter: ");
  
  //Auf Daten der seriellen Schnittstelle warten
  while (!Serial.available());

  //Verbrauchten Kraftstoff einlesen
  float verbrauch = Serial.parseFloat();

  //Für bessere Lesbarkeit die Eingabe anzeigen
  Serial.println(verbrauch);

  //Das Ergebnis formatiert darstellen
  Serial.print("Der Durchschnittsverbrauch ist ");
  Serial.print((verbrauch / kilometer) * 100);
  Serial.println(" l/100km");
}
