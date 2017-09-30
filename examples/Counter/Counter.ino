// Exemple for MDebounce libray: Counter

#include <MDebounce.h>

debounce button = debounce(2,HIGH); 		//Create object for button

int c=0;									//Variable to count button pressed times
                              
void setup() {
	Serial.begin(9600);						//Setup the serial port
	button.setBouncetime(500);				//Change the bounce time
}

void loop() {
	
  if(button.read()){						//If button is pressed...
    c++;
    Serial.print("Count: ");
    Serial.print(c);
    Serial.println();
  }

}