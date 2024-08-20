int ledPin = 9;
int brightness = 127; // Integer between 0 and 255

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ledPin, brightness);
}
