// Code used to alert users when a certain force threshold is applied.
//To monitor if a certain weight limit is exceeded on a surface, triggering visual and auditory alerts.

//declare variable pins
const int forcesensorPin =A0;
const int buzzerPin =8;
const int redPin =9;
const int greenPin =10;
const int bluePin =11;

int sensorValue =0;

//set threshold value for force.
int threshold =500; 

void setup() {
  pinMode(forcesensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  Serial.begin(9600);
}

// part of the code to run repeatedly:
void loop() {
  sensorValue =analogRead(forcesensorPin);
  Serial.println(sensorValue);

if(sensorValue> threshold){
  digitalWrite(buzzerPin, HIGH);
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin , LOW);
}
else {
digitalWrite(buzzerPin, LOW);
digitalWrite(redPin, LOW);
digitalWrite(greenPin, HIGH);
digitalWrite(bluePin, HIGH);
}
  delay(100);
  
}
