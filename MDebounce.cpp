/*	Arduino MDebounce library
	by: Marlon Soares
	marlonslbr@gmail.com
	MDebounce.cpp
*/

#include "MDebounce.h"

debounce::debounce(byte pin,bool pressState){
	_pin = pin; //save the pin of the button
	_pressState = pressState; 
	if(_pressState==LOW){
		pinMode(_pin,INPUT_PULLUP);
	}else{
		pinMode(_pin,INPUT);
	}
}

debounce::debounce(byte pin,bool pressState,unsigned int time){
	_pin = pin; //save the pin of the button
	_pressState = pressState;
	_debounce = time; 
	if(_pressState==LOW){
		pinMode(_pin,INPUT_PULLUP);
	}else{
		pinMode(_pin,INPUT);
	}
}

void debounce::setBounceTime(unsigned int Tbounce){
	_debounce = Tbounce; //save the new value for debounce time
}

bool debounce::read(void){
	bool _pressState=false; 
	static unsigned long _last=0 ;
	if(digitalRead(_pin) == _pressState){
    		if(millis() - _last > _debounce){
      			if(digitalRead(_pin) ==_pressState){
        			_last = millis();
        			return true ; //return 1(true),button is presssed
      			}
      		}
  	}
  return false; //return 0(false),button is not presssed
}