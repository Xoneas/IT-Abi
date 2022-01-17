void setup() {
  Serial.begin(9600);
}

void loop() {
  //Grenzeninput auffordern
  Serial.print("Grenze 1: ");
  //Auf Input warten
  while (!Serial.available());
  //Und Input speichern
  int grenze1 = Serial.parseInt();
  //Zur Lesbarkeit den eingegebenen Wert auch ausgeben
  Serial.println(grenze1);
  //Grenzeninput auffordern
  Serial.print("Grenze 2: ");
  //Auf Input warten
  while (!Serial.available());
  //Und Input speichern
  int grenze2 = Serial.parseInt();
  //Zur Lesbarkeit den eingegebenen Wert auch ausgeben
  Serial.println(grenze2);
  //Alle Zahlen in den Grenzen durchgehen
  for (grenze1; grenze1 <= grenze2; grenze1++) {
    //Und testen, ob die Zahl durch 15 teilbar ist (Wenn durch 15 teilbar, dann durch 3 und 5 teilbar)
    if (!(grenze1 % 15)) {
      //Die teilbare Zahl ausgeben
      Serial.print(grenze1);
      //Und Infos dazu ausgeben
      Serial.println(" ist durch 3 und durch 5 teilbar");
    }
  }
}
