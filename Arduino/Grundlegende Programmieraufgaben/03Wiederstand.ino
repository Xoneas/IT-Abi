void setup() {
  //Die serielle Schnittstelle aktivieren
  Serial.begin(9600);
}

void loop() {
  //Die Ergebnisvariabel deklarieren, da sie doppelt verwendet wird
  unsigned long ergebnis = 0;
  
  //Den Nutzer auffordern, den 1. Widerstand einzugeben
  Serial.print("1. Widerstand: ");

  //Auf Daten der seriellen Schnittstelle warten
  while (!Serial.available());

  //Dividend einlesen
  float widerstand1 = Serial.parseFloat();

  //Für bessere Lesbarkeit die Eingabe anzeigen
  Serial.println(widerstand1);

  //Den Nutzer auffordern, den Divisor einzugeben
  Serial.print("2. Widerstand: ");

  //Auf Daten der seriellen Schnittstelle warten
  while (!Serial.available());

  //Divisor einlesen
  float widerstand2 = Serial.parseFloat();

  //Für bessere Lesbarkeit die Eingabe anzeigen
  Serial.println(widerstand2);

  //Den Nutzer fragen, wie die Widerstände geschaltet sind
  Serial.println("Sind die Widerstände (P)arallel oder in (R)eihe geschaltet?");
  Serial.print("[P/R] ");
  
  //Auf Daten der seriellen Schnittstelle warten
  while (!Serial.available());

  //Die Eingabe auslesen
  char schaltung = Serial.read();

  //Für bessere Lesbarkeit die Eingabe anzeigen
  Serial.println(schaltung);

  //Wenn die Widerstände parallel geschaltet sind
  if (schaltung == 'p' || schaltung == 'P') {
    //Nutze die Formel (R1*R2)/(R1+R2), um das Ergebnis zu erhalten
    ergebnis = (widerstand1 * widerstand2) / (widerstand1 + widerstand2);
  }
  
  //Wenn die Widerstände in Reihe geschaltet sind
  if (schaltung == 'r' || schaltung == 'R') {
    //Addire die Widerstände, um das Ergebnis zu erhalten
    ergebnis = widerstand1 + widerstand2;
  }

  //Das Ergebnis formatiert darstellen
  Serial.print("Der Gesamtwiderstand ist ");
  Serial.print(ergebnis);
  Serial.println(" Ω");
}
