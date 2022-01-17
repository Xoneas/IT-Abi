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
----------------------------

int SensorLinks = 6;
int SensorRechts = 7;

void BodenInit () {
  analogRead(SensorLinks);
  analogRead(SensorRechts);
}

int GetBodenwertLinks () {
  return   analogRead(SensorLinks);
}


int GetBodenwertRechts () {
  return   analogRead(SensorRechts);
}


----------------------------------------

int SensorLinks = 6;
int SensorRechts = 7;

void BodenInit () {
  analogRead(SensorLinks);
  analogRead(SensorRechts);
}


int getBodenwertLinks () {
  return   analogRead(SensorLinks);
}



int getBodenwertRechts () {
  return   analogRead(SensorRechts);
}
