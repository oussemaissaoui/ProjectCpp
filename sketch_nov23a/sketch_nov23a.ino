#define led 12
void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  digitalWrite(12,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);

}
