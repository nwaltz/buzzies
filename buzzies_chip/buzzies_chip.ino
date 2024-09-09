int motor_l = 2;
int motor_r = 3;
int pot = 1; // pin 2

int delay_time, analog_in;
int motor_state = 0;
int last_time;

void setup()
{
  pinMode(motor_l, OUTPUT);
  pinMode(motor_r, OUTPUT);
  pinMode(pot, INPUT);
  last_time = millis();
}

void loop()
{
  analog_in = analogRead(pot);
  delay_time = map(analog_in, 0, 1023, 1000, 3000);
  digitalWrite(motor_l, LOW);
  digitalWrite(motor_r, LOW);
  delay(delay_time);
  digitalWrite(motor_l, LOW);
  digitalWrite(motor_r, LOW);
  delay(delay_time);

  
//  if (millis() - last_time > delay_time) {
//    last_time = millis();
//    if (motor_state == 0) {
//      digitalWrite(motor_l, HIGH);
//      digitalWrite(motor_r, LOW);
//      motor_state = 1;
//    }
//    else {
//      digitalWrite(motor_r, HIGH);
//      digitalWrite(motor_l, LOW);
//      motor_state = 0;
//    }
//  }
}
