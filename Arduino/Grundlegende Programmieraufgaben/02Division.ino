void setup() {
  //Die serielle Schnittstelle aktivieren
  Serial.begin(9600);
}

void loop() {
  //Den Nutzer auffordern, den Dividend einzugeben
  Serial.print("Dividend: ");
  
  //Auf Daten der seriellen Schnittstelle warten
  while (!Serial.available());

  //Dividend einlesen
  int dividend = Serial.parseInt();

  //Für bessere Lesbarkeit die Eingabe anzeigen
  Serial.println(dividend);

  //Den Nutzer auffordern, den Divisor einzugeben
  Serial.print("Divisor: ");
  
  //Auf Daten der seriellen Schnittstelle warten
  while (!Serial.available());

  //Divisor einlesen
  int divisor = Serial.parseInt();

  //Für bessere Lesbarkeit die Eingabe anzeigen
  Serial.println(divisor);

  //Das Ergebnis formatiert darstellen
  Serial.print("Das Ergebnis der Division ");
  Serial.print(dividend);
  Serial.print(":");
  Serial.print(divisor);
  Serial.print(" ist ");
  Serial.print(dividend / divisor);
  Serial.print(" Rest ");
  Serial.println(dividend % divisor);
}
