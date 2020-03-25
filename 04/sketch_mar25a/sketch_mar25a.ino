const byte ledpin = A0;
int val;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  {
  val = analogRead(ledpin);
  Serial.println(val);
  delay(500);
  }
}
