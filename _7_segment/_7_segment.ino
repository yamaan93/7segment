int top =  10;
int topRight =11;
int topLeft=9;
int middle = 8;
int bottomRight =6;
int bottom = 5;
int bottomLeft = 4;
int up =3;
int down =4;
int lastButtonStateUp= 0;
int lastButtonStateDown=0;
int buttonStateUp;
int buttonStateDown;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() {
  for(int i=4; i<12; i++){
    pinMode(i,OUTPUT);
  }
  pinMode(3,INPUT);
  pinMode(4,INPUT);
}

void loop() {
  int readingUp = digitalRead(up);
  int readingDown = digitalRead(down);
   // check to see if you just pressed the button
  // (i.e. the input went from LOW to HIGH),  and you've waited
  // long enough since the last press to ignore any noise:


  // If the switch changed, due to noise or pressing:
   if (readingUp != lastButtonStateUp) {
    // reset the debouncing timer
    lastDebounceTime = millis();
  }
   if ((millis() - lastDebounceTime) > debounceDelay) {
    // whatever the reading is at, it's been there for longer
    // than the debounce delay, so take it as the actual current state:

    // if the button state has changed:
    if (readingUp != buttonStateUp) {
      buttonStateUp= readingUp;

      // only toggle the LED if the new button state is HIGH
      if (buttonStateUp == HIGH) {
      
      }
    }
  }
  
}
