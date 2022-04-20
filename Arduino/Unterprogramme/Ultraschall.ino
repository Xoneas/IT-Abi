//Variablendeklaration
// linke Seite
int echoLinks = A2;
int triggerLinks = 6;
// rechte Seite
int echoLinks = 4;
int triggerLinks = 8;

// Taster
int taster = 2;
volatile int betaetigt = 0;
volatile unsigned long alteZeit=0, entprellZeit=20;


void ultrschallInit() {
  pinMode(echoLinks, INPUT);       // Echo links als Eingang ohne PULLUP-Wiederstand
  pinMode(triggerLinks, OUTPUT);   // Trigger links als Ausgang
  pinMode(echoRechts, INPUT);      // Echo rechts als Eingang ohne PULLUP-Wiederstand
  pinMode(triggerRechts, OUTPUT);  // Trigger rechte als Ausgang
  pinMode(taster, INPUT_PULLUP);  
  attachInterrupt(digitalPinToInterrupt(taster), setAnzahlBetaetigt, RISING); //Interrupt INT0 wird bei steigender Flanke
}

void setAnzahlBetaetigt() {
  if((millis() - alteZeit > entprellZeit) {
    betaetigt ++;
    alteZeit = millis(); //letzte Schaltzeit merken
  }
     }
     
int getTaster () {
  if(digitalRead(taster) == LOW) { //Taster an D2 betätigt 
    return 1;
  }
}
 else {
   return 0;
 }
     }
 void tasterReset() {
   betaetigt = 0;
 }
     
 flaot getDistanceCM(int TRIG, int ECHO) {
   digitalWrite(TRIG, HIGH); //Trigger Links auf 5 V
   delayMicroseconds(20);
   digitalWrite(TRIG, LOW); //Trigger Links auf 0 V
   while(digitalRead(ECHO) == LOW); //warten bis Echo links auf HIGH geht
   float zeit = micros();
   while(digitalRead(ECHO) == HIGH); //warten bis Echo links auf LOW geht
   float laufzeit = micros() - zeit; //Laufzeit ermitteln
   return laufzeit /58;
 }

//Warum 58?
//Zeit die der Burst braucht um einmal hin und zurück zukommen = t Geschwindigkeit = 340m/s
// strecke = vt strecke = 340m/s
// t 0,034 cm/us * t /2 in us = 0,017 * t kehrwert von 0,017 = 58 daraus ergibt sich : t/58
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
