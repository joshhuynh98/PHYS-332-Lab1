const int l1 = 13;
int brightness = 15;
int timer = 0;
int dimState = false;

void setup() {
  // put your setup code here, to run once:
  
  //Serial.begin(9600);
  
  //Serial.print("Hi there\n");
  pinMode(l1, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

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
}
