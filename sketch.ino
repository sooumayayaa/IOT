void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(16, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(18, OUTPUT);
}

void loop() {
   digitalWrite(18, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(16, LOW);
  delay(1000);

  digitalWrite(18, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(16, HIGH);
  delay(1000);

   digitalWrite(18, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(16, HIGH);
  delay(1000);

  


}
