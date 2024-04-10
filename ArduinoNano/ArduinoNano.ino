#include <FastLED.h>
#include "Animator.h"

#define CONTROL_PIN 4
#define NUM_LED 256

CRGB leds[NUM_LED];

Animator animator1;
Animator animator2;
Animator animator3;

CRGB red;
CRGB blue;
CRGB green;

void setup() {
  Serial.begin(115200);
  FastLED.addLeds<WS2812, CONTROL_PIN, GRB>(leds, NUM_LED);

  animator1.begin(leds, 0, 15);
  animator2.begin(leds, 32, 47);
  animator3.begin(leds, 64, 79);

  red = CRGB::Red;
  blue = CRGB::Blue;
  green = CRGB::Green;
}

void loop(){
  FastLED.setBrightness(10);

  animator1.chasing(2, red);
  animator2.chasing(2, green);
  animator3.chasing(2, blue);

  delay(50);
  FastLED.show();
}