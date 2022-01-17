//Motorenpins
//Rechter Motor
int PWM1_L = 3;
int PWM1_R = 5;
//Linker Motor
int PWM2_L = 10;
int PWM2_R = 9;

void motorInit() {
  pinMode(PWM1_L, OUTPUT);
  pinMode(PWM1_R, OUTPUT);
  pinMode(PWM2_L, OUTPUT);
  pinMode(PWM2_R, OUTPUT);
}

void setMotorPower(int motorLinks, int motorRechts) {
  //Rechte Motorsteuerung
  if (motorRechts > 0) {          //Rechter Motor vorwärts
    analogWrite(PWM1_R, motorRechts);
    digitalWrite(PWM1_L, LOW);
  } else if (motorRechts < 0) {  //Rechter Motor rückwärts
    analogWrite(PWM1_L, -motorRechts);
    digitalWrite(PWM1_R, LOW);
  } else {                        //Rechter Motor bremsen
    digitalWrite(PWM1_L, HIGH);
    digitalWrite(PWM1_R, HIGH);
  }

  //Linke Motorsteuerung
  if (motorLinks > 0) {           //Linker Motor vorwärts
    analogWrite(PWM2_R, motorLinks);
    digitalWrite(PWM2_L, LOW);
  } else if (motorLinks < 0) {    //Linker Motor rückwärts
    analogWrite(PWM2_L, -motorLinks);
    digitalWrite(PWM2_R, LOW);
  } else {                        //Linker Motor bremsen
    digitalWrite(PWM2_L, HIGH);
    digitalWrite(PWM2_R, HIGH);
  }
}













-----------------------------------------------
int PWM1_L = 3;
int PWM1_R = 5;

int PWM2_L = 10;
int PWM2_R = 9;


void MotorInit () {
  pinMode(PWM1_L, OUTPUT);
  pinMode(PWM1_R, OUTPUT);
  pinMode(PWM2_L, OUTPUT);
  pinMode(PWM2_R, OUTPUT);
}

void SetMotorPower(int MotorLinks, int MotorRechts) {
  if (MotorRechts > 0) {
    analogWrite(PWM1_R, MotorRechts);
    digitalWrite(PWM1_L, LOW);
  }
  else if (MotorRechts < 0) {
    analogWrite(PWM1_L, -MotorRechts);
    digitalWrite(PWM1_R, LOW);
  }
  else {
    digitalWrite(PWM1_R, HIGH);
    digitalWrite(PWM1_L, HIGH);
  }

  
  if (MotorLinks > 0) {
    analogWrite(PWM2_R, MotorLinks);
    digitalWrite(PWM2_L, LOW);
  }
  else if (MotorLinks < 0) {
    analogWrite(PWM2_L, -MotorLinks);
    digitalWrite(PWM2_R, LOW);
  }
  else {
    digitalWrite(PWM2_R, HIGH);
    digitalWrite(PWM2_L, HIGH);
  }



  
}
