#include <FastLED.h>
#include "Controller.h"
// #include "Animator.h"

#define CONTROL_PIN 4
#define NUM_LED 256

CRGB leds[NUM_LED];

Controller controller(leds);

void setup() {
  Serial.begin(115200);
  FastLED.addLeds<WS2812, CONTROL_PIN, GRB>(leds, NUM_LED);
}

void loop(){
  FastLED.setBrightness(50);

  // animate individual letters
  controller.animate_letter();
  // controller.animate_letter(type, letter, speed);
  // controller.animate_letter(type, letter, speed);
  //animate all letters at once
  // controller.animate_all(type, speed);
}