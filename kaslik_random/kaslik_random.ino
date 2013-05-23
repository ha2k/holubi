
const int ledPin2 =  2;      // the number of the LED pin
const int ledPin3 =  3;      // the number of the LED pin
const int ledPin4 =  4;      // the number of the LED pin
const int ledPin5 =  5;      // the number of the LED pin
const int ledPin6 =  8;      // the number of the LED pin
const int ledPin7 =  9;
const int ledPin8 =  10;      // the number of the LED pin
const int ledPin9 =  11;      // the number of the LED pin

// Variables will change:
int ledState2 = LOW;  // ledState used to set the LED
int ledState3 = LOW;  
int ledState4 = LOW;  
int ledState5 = LOW;  // ledState used to set the LED
int ledState6 = LOW;  
int ledState7 = LOW;  
int ledState8 = LOW;  // ledState used to set the LED
int ledState9 = LOW;  

long previousMillis2 = 0;        // will store last time LED was updated
long previousMillis3 = 0;        // will store last time LED was updated
long previousMillis4 = 0;        // will store last time LED was updated
long previousMillis5 = 0;        // will store last time LED was updated
long previousMillis6 = 0;        // will store last time LED was updated
long previousMillis7 = 0;
long previousMillis8 = 0;        // will store last time LED was updated
long previousMillis9 = 0;        // will store last time LED was updated
// the follow variables is a long because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long interval2 = 100;           // interval at which to blink (milliseconds)
long interval3 = 200;           // interval at which to blink (milliseconds)
long interval4 = 300;
long interval5 = 400;           // interval at which to blink (milliseconds)
long interval6 = 500;           // interval at which to blink (milliseconds)
long interval7 = 600;
long interval8 = 700;           // interval at which to blink (milliseconds)
long interval9 = 800;           // interval at which to blink (milliseconds)


int puls = 150;

int basinterval = 200;

void setup() {
  pinMode(ledPin2, OUTPUT);      
  pinMode(ledPin3, OUTPUT);      
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);      
  pinMode(ledPin6, OUTPUT);      
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin8, OUTPUT);      
  pinMode(ledPin9, OUTPUT);      
}

void loop() {
  unsigned long currentMillis = millis();
 
  if(currentMillis - previousMillis2 > interval2) {
    interval2 = basinterval + int(random(30000));
    previousMillis2 = currentMillis;   
    //if (ledState2 == LOW){
    ledState2 = HIGH;
    //} 
    //else {
    //  ledState2 = LOW;
    //}
    digitalWrite(ledPin2, ledState2);
  }
  if(currentMillis - previousMillis2 > puls && ledState2 == HIGH ){
    ledState2 = LOW;
    digitalWrite(ledPin2, ledState2);
  }
  
 if(currentMillis - previousMillis3 > interval3) {
    interval3 = basinterval +int(random(30000));
    previousMillis3 = currentMillis;   
    //if (ledState2 == LOW){
    ledState3 = HIGH;
    //} 
    //else {
    //  ledState2 = LOW;
    //}
    digitalWrite(ledPin3, ledState3);
  }
  if(currentMillis - previousMillis3 > puls && ledState3 == HIGH ){
    ledState3 = LOW;
    digitalWrite(ledPin3, ledState3);
  }

 if(currentMillis - previousMillis4 > interval4) {
    interval4 = basinterval +int(random(30000));
    previousMillis4 = currentMillis;   
    //if (ledState2 == LOW){
    ledState4 = HIGH;
    //} 
    //else {
    //  ledState2 = LOW;
    //}
    digitalWrite(ledPin4, ledState4);
  }
  if(currentMillis - previousMillis4 > puls && ledState4 == HIGH ){
    ledState4 = LOW;
    digitalWrite(ledPin4, ledState4);
  }  

 if(currentMillis - previousMillis5 > interval5) {
   interval5 = basinterval +int(random(30000));
    previousMillis5 = currentMillis;   
    ledState5 = HIGH;
     digitalWrite(ledPin5, ledState5);
  }
  if(currentMillis - previousMillis5 > puls && ledState5 == HIGH ){
    ledState5 = LOW;
    digitalWrite(ledPin5, ledState5);
  }  

 if(currentMillis - previousMillis6 > interval6) {
   interval6 = basinterval +int(random(30000));
    previousMillis6 = currentMillis;   
    ledState6 = HIGH;
     digitalWrite(ledPin6, ledState6);
  }
  if(currentMillis - previousMillis6 > puls && ledState6 == HIGH ){
    ledState6 = LOW;
    digitalWrite(ledPin6, ledState6);
  }  

 if(currentMillis - previousMillis7 > interval7) {
   interval7 = basinterval +int(random(30000));
    previousMillis7 = currentMillis;   
    ledState7 = HIGH;
     digitalWrite(ledPin7, ledState7);
  }
  if(currentMillis - previousMillis7 > puls && ledState7 == HIGH ){
    ledState7 = LOW;
    digitalWrite(ledPin7, ledState7);
  }  
  
 if(currentMillis - previousMillis8 > interval8) {
   interval8 = basinterval +int(random(30000));
    previousMillis8 = currentMillis;   
    ledState8 = HIGH;
     digitalWrite(ledPin8, ledState8);
  }
  if(currentMillis - previousMillis8 > puls && ledState8 == HIGH ){
    ledState8 = LOW;
    digitalWrite(ledPin8, ledState8);
  }  

 if(currentMillis - previousMillis9 > interval9) {
   interval9 = basinterval +int(random(30000));
    previousMillis9 = currentMillis;   
    ledState9 = HIGH;
     digitalWrite(ledPin9, ledState9);
  }
  if(currentMillis - previousMillis9 > puls && ledState9 == HIGH ){
    ledState9 = LOW;
    digitalWrite(ledPin9, ledState9);
  }  

}


