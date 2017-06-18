int yellow_led = 6;
int red_led = 8;
int green_led = 10;
int white_led = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(yellow_led, OUTPUT);
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(white_led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  digitalWrite(yellow_led, HIGH);
  light(yellow_led, 150);
  light(red_led, 150);
  light(green_led, 150);
  light(white_led, 150);
}

void light(int led, int interval) {
  digitalWrite(led, HIGH);
  delay(interval);
  digitalWrite(led, LOW);
}

