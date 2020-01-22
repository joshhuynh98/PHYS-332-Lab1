const int l1 = 13;
int brightness = 15;
int timer = 0;
boolean dimState = false;

void setup() {
  // put your setup code here, to run once:
  
  //Serial.begin(9600);
  
  //Serial.print("Hi there\n");
  pinMode(l1, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
/*
  digitalWrite(l1, HIGH);
  delay(1);
  digitalWrite(l1, LOW);
  delay(brightness);

  timer += 1+(15-brightness);
  
  if (timer>100 && brightness>1 && !dimState) {
    brightness--;
    timer = 0;
  }
  else if (timer>100 && brightness<15 && dimState) {
    brightness++;
    timer = 0;
  }

  if (brightness==1) {
    dimState = !dimState;
  } else if (brightness==15) {
    dimState = !dimState;
  }
*/

  dim();
  undim();
}

void dim() {
  int i;
  int brightness;

  for (brightness = 1; brightness<10; brightness++) {
    for (i = 0; i < 20; i++) {
      blink(brightness, 10-brightness);
    }
  }
  return;
}

void undim() {
  int i;
  int brightness;

  for (brightness = 9; brightness>1; brightness--) {
    for (i = 0; i < 20; i++) {
      blink(brightness, 10-brightness);
    }
  }
  return;
}

void blink(int on_length, int off_length) {

  digitalWrite(l1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(on_length);                       // wait for a second
  digitalWrite(l1, LOW);    // turn the LED off by making the voltage LOW
  delay(off_length);

  return;
}
