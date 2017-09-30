// Exemple for MDebounce libray: SimpleToogle

#include <MDebounce.h>

debounce onoff = debounce(2,LOW); 		//Create object for button
                                  		//in pin 2,LOW state = pressed
void setup() {
  pinMode(13,OUTPUT); 					//Set the led pin for OUT
}

void loop() {
  if(onoff.read()){						//If button is pressed...
    digitalWrite(13,!digitalRead(13)); 	//do...
  }

}