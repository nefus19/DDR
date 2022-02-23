#include <Keyboard.h>

  int up = analogRead(A2);
  int down = analogRead(A3);
  int left = analogRead(A1);
  int right = analogRead(A0);
  
void setup() {
  Serial.begin(9600); 
  Keyboard.begin();
  } 
  
void loop() {  
  
  
  if ( right >=900 && right <=1010 ) {
    //delay(100);
  Keyboard.press(KEY_RIGHT_ARROW);
  }
   else{
  Keyboard.release(KEY_RIGHT_ARROW);
  }
    if ( left >=900 && left <=970 ) {
    //delay(100);
  Keyboard.press(KEY_LEFT_ARROW);
  }
   else{
  Keyboard.release(KEY_LEFT_ARROW);
  }
   if ( down >=930 && down <= 970 ) {
    //delay(100);
  Keyboard.press(KEY_DOWN_ARROW);
  }
   else{
  Keyboard.release(KEY_DOWN_ARROW);
  }
  
  if ( up>=930 && up <= 970 ) {
    //delay(100);
  Keyboard.press(KEY_UP_ARROW);
  }
   else{
  Keyboard.release(KEY_UP_ARROW);
  }
  
  }
