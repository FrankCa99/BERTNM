#ifndef ANIMATOR_H
#define ANIMATOR_H

#include <Arduino.h>
#include "FastLED.h"
#include "Letter.h"

class Animator{
  public:
    Animator();
    void set_led_array(CRGB* _led_array);
    void fill_solid(Letter _letter);
  private: 
    CRGB* led_array;
};

#endif