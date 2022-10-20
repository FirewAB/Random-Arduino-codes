/*
A 15 pieces dispenser (Blink LED 15 Times)

Despensing frequency = 1 piece per second

Press button to despense

You cacn attach LED at pin 13 but the LED onboard the 
arduino is already used
*/

///==== Definition =====
//Define an input pin
int pushButton = 7;
//Define a Boolean to track a button press
bool buttonIsPressed;
//Define LED pin
int led1 = 13;

///==== Set up =====
void setup() {
  //Set LED pin mode
  pinMode(led1, OUTPUT);
  //Set push button pinMode
  pinMode(pushButton, INPUT_PULLUP);
  //Set push button to known value
  buttonIsPressed = true;
}

///==== Main =====
void loop() {
    //Checking the state of the button
    buttonIsPressed = digitalRead(pushButton);
    
    //If the button is pressed
    if (buttonIsPressed != true) {
          for (int i=0; i<15; i++){
            delay(250);
            digitalWrite(led1, HIGH);
            delay(500);
            digitalWrite(led1, LOW);
            delay(250);
            buttonIsPressed = true;
        }
    }
}
