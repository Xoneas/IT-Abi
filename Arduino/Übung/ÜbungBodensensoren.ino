//Variablen
int sensorLinks = 6;
int sensorRechts = 7;

void bodenInit() {
  //AD-Wandler einschwingen lassen
  analogRead(sensorLinks);
  analogRead(sensorRechts);
}
int getBodenwertLinks(){
  return analogRead(sensorLinks);
}
int getBodenwertRechts(){
  return analogRead(sensorRechts);
}
