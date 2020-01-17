int currPos = 1;
const int offset = 8;
boolean start = true;

int up;
int down;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  
  currPos = random(2,4);
  up = currPos + 1;
  down = currPos - 1;
  digitalWrite(currPos+offset, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (start) {
    delay(1000);
    digitalWrite(currPos+offset, LOW);
  }

  digitalWrite(up+offset, HIGH);
  digitalWrite(down+offset, HIGH);
  delay(500);
  digitalWrite(up+offset, LOW);
  digitalWrite(down+offset, LOW);

  if (up<=5)
    up++;
  if (down>=1)
    down--;
    
  if (up>5 && down<1) {
    start = true;
    currPos = random(2,4);
    up = currPos + 1;
    down = currPos - 1;
    delay(1000);
    digitalWrite(currPos+offset, HIGH);
  } else {
    start = false;
  }
}
