Tevoid setup() {
  //Motoren initialisieren
  motorInit();
}

void loop() {
  for (int i = 0; i <= 255; i++) {
    setMotorPower(i, i);
    delay(10);
  }
  delay(2000);
  setMotorPower(0, 0);
  delay(2000);
}
