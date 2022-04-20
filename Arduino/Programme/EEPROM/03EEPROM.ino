#include <EEPROM.h>
extern int led1, led2, led14, triggerLinks, echoLinks, triggerRechts, echoRechts;

struct Odowerte {               // Struktur für die einzelnen Geschwindigkeiten
  float Entfernung1;
  float Entfernung2;
};



void setup() {
  Serial.begin(9600);
  motorInit();
  odoInit();
  ledInit();
  ultraschallInit();
}

void loop()
{
  if (getAnzahlBetaetigt() == 1) {
    ledSchalten(led1, HIGH);
    ledSchalten(led2, HIGH);
    ledSchalten(led14, HIGH);
    delay(1000);
    ultraschallSpeichern();
    ledSchalten(led1, LOW);
    ledSchalten(led2, LOW);
    ledSchalten(led14, LOW);
    tasterReset();
  }

  if (getInterruptRechts() > 3) {         // wenn rechtes Antriebsrad gedreht wird
    blinken();                      // Funktion blinken()
    datenAusgabe();                 // Funktion datenAusgabe()
    odoReset();                     // Odometriesensoren zurücksetzen
  }
}

void ultraschallSpeichern()
{
  int eeAddress = 0;
  Odowerte meineWerte;
  for (int i = 0; i < 10; i++)
  {
    setMotorPower(255, 255);
    while (getWegLinksCM() < 10);

    meineWerte.Entfernung1 = getDistanceCM(triggerLinks, echoLinks );
    meineWerte.Entfernung2 = getDistanceCM(triggerRechts, echoRechts);
    EEPROM.put(eeAddress, meineWerte);    // Variable der Struktur im EEPROM speichern
    eeAddress += sizeof(meineWerte);      // Größe der Struktvariablen abfragen und Adresse entsprechend hochzählen
    odoReset();                           // Odometriesensoren zurücksetzen
  }
  setMotorPower(0, 0);
  delay(1000);
  odoReset();
}

void datenAusgabe()
{
  int eeAddress = 0;           //Speicheraresse auf 0 setzen damit man die Daten wieder nacheinander abrufen kann
  Odowerte meineWerte; //Variable to store custom object read from EEPROM.
  for (int i = 0; i < 10; i++) {
    EEPROM.get(eeAddress, meineWerte);   // Strukturvariable zurücklesen
    Serial.print("Die Entfernung links beträgt : ");
    Serial.print(meineWerte.Entfernung1);
    Serial.println(" cm");
    Serial.print("Die Entfernung rechts beträgt : ");
    Serial.print(meineWerte.Entfernung2);
    Serial.println(" cm");
    eeAddress += sizeof(meineWerte);    // Größe der Struktvariablen abfragen und Adresse entsprechend hochzählen damit die Daten der nächsten 10 cm gelesen werden können
  }
}
void blinken() {                    // Selbsterklärend!!
  ledSchalten(led1, HIGH);
  ledSchalten(led2, HIGH);
  ledSchalten(led14, HIGH);
  delay(1000);
  ledSchalten(led1, LOW);
  ledSchalten(led2, LOW);
  ledSchalten(led14, LOW);
  delay(1000);
}
