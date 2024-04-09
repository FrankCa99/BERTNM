#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <Arduino.h>
#include <FastLED.h>
#include "Animator.h"

  class Controller{
    public:
      Controller(CRGB* _led_array);
      void animate_letter();
    private:
      Animator animator;
      Letter* letter_array;
  };

#endif