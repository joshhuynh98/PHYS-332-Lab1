
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  downwards();
  upwards();
}

void downwards() {
  for (int j = 13; j>=9; j--) {
    for (int i = 0; i < 20; i++) {
      digitalWrite(j, HIGH);
      int lastLed = j+1;
      blink(lastLed, 2, 8);
    }
    digitalWrite(j, LOW);
  }
  return;
}

void upwards() {
  for (int j = 9; j<=13; j++) {
    for (int i = 0; i < 20; i++) {
      digitalWrite(j, HIGH);
      int lastLed = j-1;
      blink(lastLed, 2, 8);
    }
    digitalWrite(j, LOW);
  }
  return;
}

void blink(int led, int on_length, int off_length) {

  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(on_length);                       // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(off_length);

  return;
}
