//pin definitions
int ledPinGREEN=13; //connect resistor with positive end of led-pin and with the corresponding pin in the arduino
int ledPinYELLOW=10;
int ledPinRED=7;
int inputPin = 2; // Connect button to input pin 2

void setup() {
  //setup pin modes
  pinMode(ledPinGREEN,OUTPUT); //declare led pins as outputs
  pinMode(ledPinYELLOW,OUTPUT);
  pinMode(ledPinRED,OUTPUT);
  pinMode(inputPin, INPUT); // declare pushbutton as input
}

void loop(){
  int val = digitalRead(inputPin); // read input value of pushbutton

  if (val == LOW) { // check if the input LOW.That means that THE BUTTON IS PRESSED
    //delay a bit,then turn on only the green light for 5 seconds
    delay(1000);
    digitalWrite(ledPinRED,LOW);
    digitalWrite(ledPinYELLOW,LOW);
    digitalWrite(ledPinGREEN,HIGH);
    delay(5000);
  } else {
    //turn off the green led 
    digitalWrite(ledPinGREEN,LOW);
    
    //yellow light
    digitalWrite(ledPinYELLOW,HIGH);
    //using for instead of delay here(delay halts the programm completely.This is not good because the code will not check for the pushbutton value while in the delay function.)
   for(long int i = 0; i < 300000; i++){
     // if button is released
     if (digitalRead(inputPin) == LOW) {
       return;
     }
   }
    digitalWrite(ledPinYELLOW,LOW);

    //red light
    digitalWrite(ledPinRED,HIGH);
    //using for instead of delay here(delay halts the programm completely.This is not good because the code will not check for the pushbutton value while in the delay function.)
   for(long int i = 0; i < 800000; i++){
     // if button is released
     if (digitalRead(inputPin) == LOW) {
       return;
     }
   }
    digitalWrite(ledPinRED,LOW);

    //yellow light
    digitalWrite(ledPinYELLOW,HIGH);
    //using for instead of delay here(delay halts the programm completely.This is not good because the code will not check for the pushbutton value while in the delay function.)
   for(long int i = 0; i < 300000; i++){
     // if button is released
     if (digitalRead(inputPin) == LOW) {
       return;
     }
   }
    digitalWrite(ledPinYELLOW,LOW);
    
    //green light
    digitalWrite(ledPinGREEN,HIGH);
    //using for instead of delay here(delay halts the programm completely.This is not good because the code will not check for the pushbutton value while in the delay function.)
   for(long int i = 0; i < 600000; i++){
     // if button is released
     if (digitalRead(inputPin) == LOW) {
       return;
     }
   }
    digitalWrite(ledPinGREEN,LOW);
  }
}
