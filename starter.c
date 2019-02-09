
int ledPinPrimary = 13;
int ledPinSecondary = 7;
int sensorPin = A0;
const int buttonPin = 2;
int buttonState = 0;
int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPinPrimary, OUTPUT);
  pinMode(ledPinSecondary, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
  sensorValue = analogRead(sensorPin);

  if(buttonState == LOW){
    
      digitalWrite(ledPinPrimary,HIGH);
      delay(sensorValue);
      digitalWrite(ledPinPrimary,LOW);
      delay(sensorValue);
    
       digitalWrite(ledPinSecondary,HIGH);
      delay(sensorValue);
      digitalWrite(ledPinSecondary,LOW);
       delay(sensorValue);
  }

}