void setup() {
  Serial.begin(9600);
}

void loop() {
  //Standart-"Zahl eingeben"-Zeug
  Serial.print("Wie viele Stufen des Baumes sollen ausgegeben werden? ");
  while (!Serial.available());
  int i = Serial.parseInt();
  Serial.println(i);
  //Dann wird eine For-Schleife initialisiert, die 2 Temporärvariabeln hat:
  //i, was die Anzahl der Stufen beinhaltet, die noch ausgegeben werden müssen
  //j, was die Anzahl der Zeichen beinhaltet, die bei der momentan bearbeiteten Stufe ausgegeben werden
  //i wird logischerweise pro Durchlauf 1 weniger, da in jedem Durchlauf eine Stufe ausgegeben wird
  //j wird in jedem Durchlauf 2 mehr, da in jedem Durchlauf 2 Zeichen mehr ausgegeben werden
  for (int j = 0; i != 0; i--, j += 2) {
    //Zuerst werden so viele Leerzeichen ausgegeben wie noch Stufen zu bearbeiten sind
    //Dadurch werden die Zeichen an die richtige Stelle gerückt
    for (int k = 1; k < i; k++) {
      Serial.print(" ");
    }
    //Danach werden die Anzahl Zeichen ausgegeben, die für die Stufe ausgegeben werden müssen
    //Bei jeder Stufe muss j + 1 Zeichen ausgegeben werden, daher ist die Condition k <= j und nicht nur k < j
    for (int k = 0; k <= j; k++) {
      Serial.print("^");
    }
    //Zuletzt wird dann die Stufe "beendet", indem die nächste Zeile angefangen wird
    Serial.println();
  }
  Serial.println();
}
