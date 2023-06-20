int ledPinGREEN=13; //connect resistor with positive end of led-pin and with the corresponding pin in the arduino
int ledPinYELLOW=10;
int ledPinRED=7;

int inputPin = 2; // Connect button to input pin 3

void setup() {
  pinMode(ledPinGREEN,OUTPUT);
  pinMode(ledPinYELLOW,OUTPUT);
  pinMode(ledPinRED,OUTPUT);

  pinMode(inputPin, INPUT); // declare pushbutton as input
}

void loop(){
  int val = digitalRead(inputPin); // read input value

  if (val == LOW) { // check if the input LOW.That means that THE BUTTON IS PRESSED
    delay(1000);
    digitalWrite(ledPinRED,LOW);
    digitalWrite(ledPinYELLOW,LOW);
    digitalWrite(ledPinGREEN,HIGH);
    delay(5000);
  } else {
    digitalWrite(ledPinGREEN,LOW);
    //yellow light
    digitalWrite(ledPinYELLOW,HIGH);
   for(long int i = 0; i < 300000; i++){
     // if button is released
     if (digitalRead(inputPin) == LOW) {
       return;
     }
   }
    digitalWrite(ledPinYELLOW,LOW);

    //red light
    digitalWrite(ledPinRED,HIGH);
   for(long int i = 0; i < 800000; i++){
     // if button is released
     if (digitalRead(inputPin) == LOW) {
       return;
     }
   }
    digitalWrite(ledPinRED,LOW);

    //yellow light
    digitalWrite(ledPinYELLOW,HIGH);
   for(long int i = 0; i < 300000; i++){
     // if button is released
     if (digitalRead(inputPin) == LOW) {
       return;
     }
   }
    digitalWrite(ledPinYELLOW,LOW);
    
    //green light
    digitalWrite(ledPinGREEN,HIGH);
   for(long int i = 0; i < 600000; i++){
     // if button is released
     if (digitalRead(inputPin) == LOW) {
       return;
     }
   }
    digitalWrite(ledPinGREEN,LOW);
  }
}