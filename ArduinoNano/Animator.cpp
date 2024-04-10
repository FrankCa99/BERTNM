#include <Arduino.h>
#include <FastLED.h>

#include "Animator.h"

Animator::Animator(){

}
void Animator::begin(CRGB *_led_array, int _start, int _end){
  led_array = _led_array;
  start = _start;
  end = _end;
  
  head = start;
  tail = NULL;
}
void Animator::chasing(int len, CRGB _color){
  led_array[head] = _color; //turn on front led
  led_array[head - len] = CRGB::Black; // turn off back led

  if(head >= end) {
    tail = head - len; // save prev back led
    head = start;
  } else head ++;

  if(tail != NULL){
    led_array[tail] = CRGB::Black; // turn off back led
    tail++;
  }
}