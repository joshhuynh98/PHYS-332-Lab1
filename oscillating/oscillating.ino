int currPos = 1;
const int offset = 8;
boolean upwards = true;

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
  digitalWrite(currPos+offset, HIGH);
  delay(200);
  digitalWrite(currPos+offset, LOW);
  
  if (upwards) {
    currPos++;
    if (currPos==5) {
      upwards = false;
    }
  } else {
    currPos--;
    if (currPos==1) {
      upwards = true;
    }
  }
}
