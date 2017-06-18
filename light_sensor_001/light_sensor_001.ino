int yellow_led = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(yellow_led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  light(yellow_led, 1000);
}

void light(int led, int interval) {
  digitalWrite(led, HIGH);
  delay(interval);
  digitalWrite(led, LOW);
  delay(interval);
}

