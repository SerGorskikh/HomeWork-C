const int buttonPin = 8;    
const int ledPin1 = 12; 
const int ledPin2 = 11;
const int ledPin3 = 10;
const int ledPin4 = 9;
const int ledPin5 = 8;    
const int sensorPin = A0;
int sensorValue = 0;
void setup() {

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(sensorPin, INPUT);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
}

void loop() {

sensorValue = analogRead(sensorPin)/200;
switch (sensorValue) {
  case 0:
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
    break;
  case 1:
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
    break;
  case 2:
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
   break; 
  case 3:
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, LOW);
   break; 
  case 4:
   digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);  
    break;
}
//delay (100);
}