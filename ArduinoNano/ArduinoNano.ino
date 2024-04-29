#include <FastLED.h>
#include "Animator.h"

#define CONTROL_PIN 4
#define NUM_LED 156

CRGB leds[NUM_LED];

Animator BERT;
Animator ETRN;
Animator MT;

CRGB purple;
CRGB blue;
CRGB green;
CRGB black;

void setup() {
  Serial.begin(115200);
  FastLED.addLeds<WS2812, CONTROL_PIN, GRB>(leds, NUM_LED);

  BERT.begin(leds, 0, 31);
  ETRN.begin(leds, 32, 63);
  MT.begin(leds, 64, 78);

  purple = CRGB::Purple;
  blue = CRGB::Blue;
  green = CRGB::Green;
  black = CRGB::Black;
}

void loop(){
  FastLED.setBrightness(255);


    BERT.chasing(3, purple);
    ETRN.chasing(3, blue);
    MT.chasing(1, green);
  FastLED.show();
  delay(100);
  
  //   BERT.fill(purple);
  //   ETRN.fill(blue);
  //   MT.fill(green);
  // FastLED.show();
  // delay(250);
  //   BERT.fill(black);
  //   ETRN.fill(black);
  //   MT.fill(black);
  // FastLED.show();
  // delay(50);
}