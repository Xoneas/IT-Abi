0void setup() {
  Serial.begin(9600);
}

void loop() {
  //Standart-"Zahl eingeben"-Zeug
  Serial.print("Wie viele # sollen ausgegeben werden? ");
  while (!Serial.available());
  int anzahl = Serial.parseInt();
  Serial.println(anzahl);
  //Der Nutzer soll jetzt auswählen, welche Schleifen-Variante benutzt werden soll
  Serial.println("Welche Variante soll benutzt werden?");
  Serial.println("1) For-Schleife");
  Serial.println("2) While-Schleife");
  Serial.println("3) Goto");
  while (!Serial.available());
  int variante = Serial.parseInt();
  //Die Eingabe wird dann ausgegeben
  Serial.print("Variante ");
  Serial.print(variante);
  Serial.println(" wird benutzt");
  //Und die Temporärvariabel i wird deklariert (sie wird in allen 3 Varianten benutzt)
  int i = 0;
  switch (variante) {
    case 1:
      //Variante 1 ist die klassische For-Schleife
      for (i = 0; i < anzahl; i++) {
        Serial.print("# ");
      }
      Serial.println();
      break;
    case 2:
      //Variante 2 ist eine While-Schleife, die wie eine For-Schleife funktioniert
      while (i < anzahl) {
        Serial.print("# ");
        i++;
      }
      Serial.println();
      break;
    case 3:
      //Und Variante 3 ist ein goto-Konstrukt, was auch essenziell das gleiche macht wie die For-Schleife
      repeat:
      Serial.print("# ");
      i++;
      if (i < anzahl) goto repeat;
      Serial.println();
      break;
    default:
      //Und falls eine nichtexistente Variante ausgewählt wurde, wird das auch ausgegeben
      Serial.println("Ungültige Variante. Bitte eine Zahl zwischen 1 und 3 angeben");
      break;
  }
  Serial.println();
}
