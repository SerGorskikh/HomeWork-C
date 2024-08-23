const int buttonPin = 8;    
const int ledPin = 13;     
int buttonState=HIGH;

void setup() {

  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) {
   
    digitalWrite(ledPin, HIGH);
  } else {
  
   digitalWrite(ledPin,LOW); }
}