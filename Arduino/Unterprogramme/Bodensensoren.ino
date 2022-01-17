int SensorLinks = 6;
int SensorRechts = 7;

void BodenInit() {
  analogRead(SensorLinks);
  analogRead(SensorRechts);
}
 
int GetBodenwertLinks () {
  return analogRead(SensorLinks);
}

int GetBodenwertRechts () {
  return analogRead(SensorRechts);
}
