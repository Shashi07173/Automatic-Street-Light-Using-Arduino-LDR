int LDR = A0;
int LED = 13;
int threshold = 500;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(LDR);
  Serial.println(lightValue);

  if (lightValue < threshold) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }

  delay(100);
}