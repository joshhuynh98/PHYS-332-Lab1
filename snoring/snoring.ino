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

  undim();
  dim();
}

void undim() {
  int i;
  int brightness;

  for (brightness = 0; brightness<10; brightness++) {
    for (i = 0; i < 20; i++) {
      blink(brightness, 10-brightness);
    }
  }
  return;
}

void dim() {
  int i;
  int brightness;

  for (brightness = 10; brightness>0; brightness--) {
    for (i = 0; i < 20; i++) {
      blink(brightness, 10-brightness);
    }
  }
  return;
}

// Dr. Moore's code line 71-79
void blink(int on_length, int off_length) {

  digitalWrite(l1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(on_length);                       // wait for a second
  digitalWrite(l1, LOW);    // turn the LED off by making the voltage LOW
  delay(off_length);

  return;
}
