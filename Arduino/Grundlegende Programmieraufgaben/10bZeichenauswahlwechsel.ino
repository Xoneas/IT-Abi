void setup() {
  Serial.begin(9600);
}

void loop() {
  //Standart-"Zeichen eingeben"-Zeug
  Serial.print("Zeichen 1? ");
  while (!Serial.available());
  char zeichen1 = Serial.read();
  Serial.println(zeichen1);
  //Standart-"Zeichen eingeben"-Zeug 2 Electric Boogaloo
  Serial.print("Zeichen 2? ");
  while (!Serial.available());
  char zeichen2 = Serial.read();
  Serial.println(zeichen2);
  //Standart-"Zahl eingeben"-Zeug
  Serial.print("Wie viele \"");
  Serial.print(zeichen1);
  Serial.print(" ");
  Serial.print(zeichen2);
  Serial.print("\" sollen ausgegeben werden? ");
  while (!Serial.available());
  int anzahl = Serial.parseInt();
  Serial.println(anzahl);
  //Eine For-Schleife wird initialisiert, die so lange ausgeführt wird, wie i kleiner als anzahl ist
  for (int i = 0; i < anzahl; i++) {
    //Zuerst wird das erste Zeichen ausgebeben
    Serial.print(zeichen1);
    Serial.print(" ");
    //Dann wird I nochmal erhöht, weil man ja das gerade ausgegebene Zeichen zählen muss
    i++;
    //Und es wird (wie die Schleife es auch schon selbst macht) geprüft, ob i immer noch kleiner als anzahl ist
    if (!(i < anzahl)) break;
    //Dann wird das 2. Zeichen ausgegeben
    Serial.print(zeichen2);
    Serial.print(" ");
    //Danach wird dann von der Schleife selbst i erhöht und geprüft
    //Da das aber nur ein Mal für 2 Zeichen passieren würde, müssen wir es ein mal selbst machen
  }
  //Zum Ende werden noch 2 leere Zeilen ausgegeben, einmal um die Zeile der Zeichen zu beenden
  Serial.println();
  //Und einmal um das beendete Programm vom neuen zu trennen
  Serial.println();
}
