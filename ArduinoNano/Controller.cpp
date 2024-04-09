#include <Arduino.h>
#include <FastLED.h>

#include "Controller.h"
#include "Animator.h"
#include "Letter.h"

Controller::Controller(CRGB* _led_array){
  animator = Animator();
  animator.set_led_array(_led_array);

  letter_array[0] = Letter(0, 1);
  letter_array[1] = Letter(16, 31);
  letter_array[2] = Letter(32, 47);
  letter_array[3] = Letter(48, 63);
  letter_array[4] = Letter(64, 81);

}
void Controller::animate_letter(){
  animator.fill_solid(letter_array[0]);
}
