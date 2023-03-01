//Seth Nordeen
//Wesley Saville
int ledPin = 8;  // LED connected to digital pin 8
int inPin = 9;    // pushbutton connected to digital pin 9
int val = 0;      // variable to store the read value

void setup() {
  pinMode(ledPin, OUTPUT);  // sets the digital pin 8 as output
  pinMode(inPin, INPUT);    // sets the digital pin 9 as input
}

void loop() {
  val = digitalRead(inPin);   // read the input pin
  if(val == HIGH){
    digitalWrite(ledPin, HIGH); // sets the digital pin 8 on
    delay(1000);            // waits for a second
   digitalWrite(ledPin, LOW);  // sets the digital pin 8 off
    delay(1000);            // waits for a second
  }
}
