#include <EEPROM.h>
extern int LED1, LED2,LED14;  // LEDs sind im Unterprogramm LEDS deklariert
struct Odowerte {               // Struktur für die einzelnen Geschwindigkeiten
  float geschwLinks;
  float geschwRechts;
};
 
unsigned long zwischenzeit;   // Variable für die Zeitmessung

void setup() {
  // Initialisierungen
  Serial.begin(9600);
  motorInit();
  odoInit();
  ledInit();
  ultraschallInit();
}

void loop() {
  if(getAnzahlBetaetigt() == 1) {   // wenn der Taster betätigt wird
    ledsAn();                       // Funktion ledsAn()
    delay(1000);                    // 1 Sekunde warten
    fahrenSpeichern();              // Funktion fahrenSpeichern
    ledsAus();                      // Funktion ledsAus()
    odoReset();                     // Odometriesensoren zurücksetzen
    tasterReset();                  // Anzahl Tasterbetätigungen wieder auf 0 setzen
  }
  if(getOdoLinks() > 3) {          // wenn rechtes Antriebsrad gedreht wird
    blinken();                      // Funktion blinken()
    datenAusgabe();                 // Funktion datenAusgabe()
    odoReset();                     // Odometriesensoren zurücksetzen
  }
}
void fahrenSpeichern() {
  int eeAddress = 0;                // Anfangsadresse des EEPROMS auf 0 setzen
  Odowerte meineWerte;              // Variable für die Struktur
  for(int i = 0; i < 10; i++) {     // for-Schleife um 100 cm zu fahren 
    zwischenzeit = micros();        // aktuelle Zeit zwischenspeichern
    setMotorPower(255, 255);        // Motoren volle Leistung
    while(getOdoLinksCM() < 10) {   // while Schleife, abwarten, bis Roboter 10 cm gefahren ist
      delay(10);                    // kleines Verzögerung, damit Motoren nicht "surren"
    }
    meineWerte.geschwLinks = (getOdoLinksCM() * 1000000 / (micros() - zwischenzeit)); // Durchschnittsgeschwindigkeit für einzelne 10 cm Strecken speichern
    meineWerte.geschwRechts = (getOdoRechtsCM() * 1000000 / (micros() - zwischenzeit));
    EEPROM.put(eeAddress, meineWerte);    // Variable der Struktur im EEPROM speichern
    eeAddress += sizeof(meineWerte);      // Größe der Struktvariablen abfragen und Adresse entsprechend hochzählen
    odoReset();                           // Odometriesensoren zurücksetzen
    /*Serial.print("Links: ");              // Nur für Debugging Zwecke
    Serial.print(meineWerte.geschwLinks);  
    Serial.print("\tRechts: ");
    Serial.println(meineWerte.geschwRechts);    */
  }
  setMotorPower(0, 0);                    // Motoren abstellen
  delay(1000);                             // Verzögerung um Nachdrehen zu verhindern
}
void datenAusgabe() {
  int eeAddress = 0;                     // Speicheradresse auf 0 setzen
  Odowerte meineWerte; //Variable to store custom object read from EEPROM.
  for(int i = 0; i < 10; i++) {
    EEPROM.get(eeAddress, meineWerte);   // Strukturvariable zurücklesen
    //Serial.println("Read custom object from EEPROM: ");
    Serial.print("Geschw. links: ");      // Ausgaben gemäß Vorgabe durch Aufgabenstellung
    Serial.print(meineWerte.geschwLinks);
    Serial.print(" cm/s");
    Serial.print("\tGeschw rechts: ");
    Serial.print(meineWerte.geschwRechts);
    Serial.println(" cm/s");
    eeAddress += sizeof(meineWerte);    // Größe der Struktvariablen abfragen und Adresse entsprechend hochzählen
  }
}
void ledsAn() {                       // Selbsterklärend!!
  ledSchalten(LED1, HIGH);
  ledSchalten(LED2, HIGH);
  ledSchalten(LED14, HIGH);
}
void ledsAus() {                     // Selbsterklärend!!
  ledSchalten(LED1, LOW);
  ledSchalten(LED2, LOW);
  ledSchalten(LED14, LOW);
}
void blinken() {                    // Selbsterklärend!!
  ledSchalten(LED1, HIGH);
  ledSchalten(LED2, HIGH);
  ledSchalten(LED14, HIGH);
  delay(1000);
  ledSchalten(LED1, LOW);
  ledSchalten(LED2, LOW);
  ledSchalten(LED14, LOW);
  delay(1000);
}
