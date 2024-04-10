#ifndef Animator_H
#define Animator_h

#include <Arduino.h>
#include <FastLED.h>

class Animator{
  CRGB* led_array;
  int start;
  int end;
  int head;
  int tail;
  public:
    void chasing(int len, CRGB _color);
    Animator();
    void begin(CRGB* _led_array, int _start, int _end);
};

#endif