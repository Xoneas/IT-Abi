extern int led1, led14;
int Zwi = 0;

void setup(){

motorInit();
ledInit();
ledSchalten(led1, HIGH);
delay(500)
;
bodenInit;
int Boden = getBodenwertLinks();
ledSchalten(led14, HIGH);
delay(2000);
int Linie = getBodenwertLinks ();
Zwi = (Boden+Linie)/2;
ledSchalten(led14, LOW);
}

void loop() {
if(getBodenwertLinks() >= Zwi){
  setMotorPower(255, 100);
}

else if(getBodenwertRechts() >= Zwi){
  setMotorPower(100, 255);
}
else {
  setMotorPower(255, 255);
}
}
