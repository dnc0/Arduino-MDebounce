/*	Arduino MDebounce library
	by: Marlon Soares
	marlonslbr@gmail.com
	MDebounce.h
*/

#ifndef MDebounce_h
#define MDebounce_h
#include <Arduino.h>

class debounce{
protected:
	byte _pin; //buttton pin
	bool _pressState; //button status when pressed
	unsigned int _debounce = 160; //debounce time
public:
	debounce(byte pin,bool pressState);	//constructor 1
	debounce(byte pin,bool pressState,unsigned int time); //constructor2
	void setBounceTime(unsigned int Tbounce);  //change the debounce time
	bool read(void); //read the button and return if is pressed
};

#endif
