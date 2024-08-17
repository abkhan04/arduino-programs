int ledPin = 8;
float pi = 3.14;
int shortDelay = 100;
int longDelay = 500;
int wait = 2000;

String message = "Hello World!";

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // S (...)
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    delay(shortDelay);
    digitalWrite(ledPin, LOW);
    delay(shortDelay);
  }

  // O (---)
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    delay(longDelay);
    digitalWrite(ledPin, LOW);
    delay(longDelay);
  }

  // S (...)
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    delay(shortDelay);
    digitalWrite(ledPin, LOW);
    delay(shortDelay);
  }

  delay(wait);
}
