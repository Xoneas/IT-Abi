//Anschlüsse der Motoren rechts
int PWM1_L = 3;
int PWM1_R = 5;
//Anschlüsse der Motoren links
int PWM2_R =9;
int PWM2_L =10;
//Initialisierung, alle Motor-PINS als Ausgänge 
void motorInit() { 
   pinMode(PWM1_L, OUTPUT);
   pinMode(PWM1_R, OUTPUT);
   pinMode(PWM2_R, OUTPUT);
   pinMode(PWM2_L, OUTPUT); 
}
void setMotorPower(int linkerMotor, int rechterMotor) {
 
  if(linkerMotor > 0) {   //linker Motor vorwärts
  analogWrite(PWM2_R, linkerMotor);
  digitalWrite(PWM2_L, LOW);
}
 else if(linkerMotor < 0) { //linker Motor rückwerts
  analogWrite(PWM2_L, -linkerMotor);
  digitalWrite(PWM2_R, LOW);
}
else { //linker Motor bremst
  digitalWrite(PWM2_L, HIGH);
  digitalWrite(PWM2_R, HIGH);
} 
 if(linkerMotor > 0) {   //linker Motor vorwärts
  analogWrite(PWM1_L, linkerMotor);
  digitalWrite(PWM1_R, LOW);
}
else if (rechterMotor < 0) { //rechter Motor rückwärts
  analogWrite(PWM1_R, -rechterMotor);
  digitalWrite(PWM1_L, LOW);
  }
 else {
    digitalWrite(PWM1_L,HIGH);
    digitalWrite(PWM1_R, HIGH);
    }
}
