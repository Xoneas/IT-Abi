












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
