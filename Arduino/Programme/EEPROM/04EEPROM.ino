
extern int led1, led2, led14, triggerLinks, echoLinks, triggerRechts, echoRechts;

float myArray1[10] = {};
float myArray2[10] = {};


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
  for (int i = 0; i < 10; i++)
  {
    setMotorPower(255, 255);
    while (getWegLinksCM() < 10);

    myArray1[i] = getDistanceCM(triggerLinks, echoLinks );
    myArray2[i] = getDistanceCM(triggerRechts, echoRechts);
    odoReset();                           // Odometriesensoren zurücksetzen
  }
  setMotorPower(0, 0);
  delay(1000);
  odoReset();
}

void datenAusgabe()
{


  for (int i = 0; i < 10; i++) {

    Serial.print("Die Entfernung links beträgt : ");
    Serial.print(myArray1[i]);
    Serial.println(" cm");
    Serial.print("Die Entfernung rechts beträgt : ");
    Serial.print(myArray2[i]);
    Serial.println(" cm");
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
