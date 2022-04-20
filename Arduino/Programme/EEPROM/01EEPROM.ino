#include <EEPROM.h>

extern int led1, led2, led14;
int addr0 = 0;
int addr1 = 1;
byte value1;                          //später benötigte variablen als byte deklarieren damit man den EEPROM auslesen kann
byte value2;
void setup()
{
  Serial.begin(9600);
  ledInit();                          //Die ganzen Funktionen einbinden
  motorInit();
  odoInit();
  ledSchalten(led1, HIGH);            //Pins deklarieren
  ledSchalten(led2, HIGH);
  ledSchalten(led14, HIGH);
}

void loop()
{


  if (getInterruptLinks() > 3)
  {
    quittieren();                       //blinken
    delay(500);                         //kurz warten damit es auch zwei mal blinkt
    quittieren();                       //blinken
    odoReset();                         // Odo-Werte wieder auf 0 setzen damit er auch die richtigen CM nimmt
    delay(1000);
    setMotorPower(230, 230);            //90% der Maximal-Geschwindigkeit
    delay(5000);                        // delay für die 5 Sekunden Fahrt
    setMotorPower(0, 0);
    getWegRechtsCM();                   //Funktion zum speichern des Weges in Zentimetern
    getWegLinksCM();

    int val1 = getWegRechtsCM();        //Platzhalter für die Beschreibung des EEPROMS
    int val2 = getWegLinksCM();         //bei analog Werten erst durch 4 teilen weil die Bits vom EEPROM nur 255 Werte aufnehmen kann
    EEPROM.write(addr0,val1);           //EEPROM an der 0 Stelle mit dem Rechten Wert beschreiben
    EEPROM.write(addr1,val2 );          //EEPROM an der 1 Stelle mit dem Linken Wert beschreiben
    // man könnte den EEPROM hier auch direkt mit der Funktion (getWeg()) beschreiben da man ja eh nicht durch 4 teilt

    
    delay(500);
    odoReset();                         //Odo-Werte wieder zurücksetzen für alles Weitere
  }

  ledSchalten(led1, HIGH);
  ledSchalten(led2, HIGH);
  ledSchalten(led14, HIGH);



  if (getInterruptRechts() > 3)
  {
    quittieren();
    delay(500);
    quittieren();
    Serial.println("*******************************************");
    Serial.print("Weg rechts = ");
    value1 = EEPROM.read(addr0);        //EEPROM an der 0 Stelle auslesen und value1 zuordnen
    value2 = EEPROM.read(addr1);        //EEPROM an der 1 Stelle auslesen und value2 zuordnen

    Serial.println(value1, DEC);        //DEC muss hier verwendet werden
    Serial.print("Weg links = ");
    Serial.println(value2, DEC);

    int Durchschnitt = ((value1 + value2) / 2) / 5; //Rechnung für Durchschnitts-Geschwindigkeit
    Serial.print("Durchschnittsgeschwindigkeit = ");
    Serial.print(Durchschnitt);
    Serial.println(" cm/ s");
    odoReset();                         //Odo-Werte zurücksetzen für Umgehen einer Endlos-Schleife

    Serial.println("*******************************************");

  }
}



void quittieren()  //Funktion zum Blinken
{
  ledSchalten(led1, HIGH);
  ledSchalten(led2, HIGH);
  ledSchalten(led14, HIGH);
  delay(500);
  ledSchalten(led1, LOW);
  ledSchalten(led2, LOW);
  ledSchalten(led14, LOW);
}
