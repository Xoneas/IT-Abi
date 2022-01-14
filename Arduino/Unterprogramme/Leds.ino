int led14 = 13;
int led2 = 8;
int led1 = 7;

void ledInit () {
  pinMode(led14, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led1, OUTPUT);
     
}
void ledSchalten(int led, int zustand){ 
  digitalWrite(led, zustand);
}
