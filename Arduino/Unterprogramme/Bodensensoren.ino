//Variablen
int sensorLinks = 6;
int sensorRechts = 7;

void bodenInit() {
  //AD-Wandler einschwingen lassen
  pinMode(SensorLinks, OUTPUT);
  pinMode(SensorRechts, OUTPUT);
}
int getBodenwertLinks(){
  return analogRead(sensorLinks);
}
int getBodenwertRechts(){
  return analogRead(sensorRechts);
}
