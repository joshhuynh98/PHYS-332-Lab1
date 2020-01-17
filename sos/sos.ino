const int l1 = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(l1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
// SOS
  for (int i=0; i<3; i++) {
    digitalWrite(l1, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    delay(200);
  }
  delay(500);
  for (int i=0; i<3; i++) {
    digitalWrite(l1, HIGH);
    delay(600);
    digitalWrite(l1, LOW);
    delay(600);
  }
  delay(100);
  for (int i=0; i<3; i++) {
    digitalWrite(l1, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    delay(200);
  }
  delay(3000);
}
