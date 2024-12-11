void setup() {
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);

}

void loop() {
  digitalWrite(9, HIGH);
  delay(5000);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(2000);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(5000);
  digitalWrite(11,LOW);
}
