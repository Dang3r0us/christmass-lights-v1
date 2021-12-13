void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}
void loop() {
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 digitalWrite(12, HIGH);
 delay(1000);
 digitalWrite(12, LOW);
}
