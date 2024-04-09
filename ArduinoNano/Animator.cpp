#include <Arduino.h>
#include <FastLED.h>

#include "Animator.h"

Animator::Animator(){
  
}
void set_led_array(CRGB* _led_array){
  led_array = _led_array;
}

void Animator::fill_solid(Letter _letter){
  for(int i = _letter.get_start(); i < _letter.get_end(); i++){
      led_array[i] = CRGB::Red;
  }
  FastLED.show();
}