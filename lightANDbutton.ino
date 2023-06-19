int ledPinBLUE=13; //connect resistor with positive end of led-pin and with the corresponding pin in the arduino
int ledPinYELLOW=10;
int ledPinRED=7;

int inputPin = 3; // Connect button to input pin 3

void setup() {
  pinMode(ledPinBLUE,OUTPUT);
  pinMode(ledPinYELLOW,OUTPUT);
  pinMode(ledPinRED,OUTPUT);

  pinMode(inputPin, INPUT); // declare pushbutton as input
  Serial.begin(9600);
}

void loop(){
  int val = digitalRead(inputPin); // read input value

  if (val == LOW) { // check if the input LOW.That means that THE BUTTON IS PRESSED
    delay(1000);
    digitalWrite(ledPinRED,LOW);
    digitalWrite(ledPinYELLOW,LOW);
    digitalWrite(ledPinBLUE,HIGH);
    delay(1000);
    digitalWrite(ledPinBLUE,LOW);
  } else {
    //red light
    digitalWrite(ledPinRED,HIGH);
    delay(8000);
    digitalWrite(ledPinRED,LOW);

    //yellow light
    digitalWrite(ledPinYELLOW,HIGH);
    delay(1500);
    digitalWrite(ledPinYELLOW,LOW);
    
    //green light
    digitalWrite(ledPinBLUE,HIGH);
    delay(3000);
    digitalWrite(ledPinBLUE,LOW);
  }
}