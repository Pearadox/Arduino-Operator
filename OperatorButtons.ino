
#include <Joystick.h>

void setup() {
  // Initialize Button Pins
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);

  // Initialize Joystick Library
  Joystick.begin();
}

// Constant that maps the phyical pin to the joystick button.
const int pinToButtonMap = 9;

// Last state of the button
int lastButtonState[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};

void loop() {

    int currentButtonState;
    
    currentButtonState = !digitalRead(2);
    if (currentButtonState != lastButtonState[2])
    {
      Joystick.setButton(2, currentButtonState);
      lastButtonState[2] = currentButtonState;
    }
    
    currentButtonState = !digitalRead(3);
    if (currentButtonState != lastButtonState[3])
    {
      Joystick.setButton(0, currentButtonState);
      lastButtonState[3] = currentButtonState;
    }

    currentButtonState = !digitalRead(4);
    if (currentButtonState != lastButtonState[4])
    {
      Joystick.setButton(4, currentButtonState);
      lastButtonState[4] = currentButtonState;
    }

    currentButtonState = !digitalRead(5);
    if (currentButtonState != lastButtonState[5])
    {
      Joystick.setButton(1, currentButtonState);
      lastButtonState[5] = currentButtonState;
    }
    
    currentButtonState = !digitalRead(6);
    if (currentButtonState != lastButtonState[6])
    {
      Joystick.setButton(2, currentButtonState);
      lastButtonState[6] = currentButtonState;
    }
    
    currentButtonState = !digitalRead(7);
    if (currentButtonState != lastButtonState[7])
    {
      Joystick.setButton(3, currentButtonState);
      lastButtonState[7] = currentButtonState;
    }
    
    currentButtonState = !digitalRead(8);
    if (currentButtonState != lastButtonState[8])
    {
      Joystick.setButton(4, currentButtonState);
      lastButtonState[8] = currentButtonState;
    }
    
    currentButtonState = !digitalRead(9);
    if (currentButtonState != lastButtonState[9])
    {
      Joystick.setButton(5, currentButtonState);
      lastButtonState[9] = currentButtonState;
    }
    
    currentButtonState = !digitalRead(10);
    if (currentButtonState != lastButtonState[10])
    {
      Joystick.setButton(6, currentButtonState);
      lastButtonState[10] = currentButtonState;
    }
    
    currentButtonState = !digitalRead(11);
    if (currentButtonState != lastButtonState[11])
    {
      Joystick.setButton(7, currentButtonState);
      lastButtonState[11] = currentButtonState;
    }
    
    currentButtonState = !digitalRead(12);
    if (currentButtonState != lastButtonState[12])
    {
      Joystick.setButton(8, currentButtonState);
      lastButtonState[12] = currentButtonState;
    }
    
    currentButtonState = !digitalRead(13);
    if (currentButtonState != lastButtonState[13])
    {
      Joystick.setButton(9, currentButtonState);
      lastButtonState[13] = currentButtonState;
    }
    
    currentButtonState = !digitalRead(14);
    if (currentButtonState != lastButtonState[14])
    {
      Joystick.setButton(10, currentButtonState);
      lastButtonState[14] = currentButtonState;
    }

  delay(50);
}

