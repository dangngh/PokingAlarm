const int ledPin = 3;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
}

void loop() {
  int motor;

  if (Serial.available() > 0) {

    motor = Serial.read();
    analogWrite(ledPin, motor);
  }
  // put your main code here, to run repeatedly:

}
