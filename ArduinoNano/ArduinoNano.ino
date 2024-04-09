#include <FastLED.h>

#define CONTROL_PIN 1
#define NUM_LED 50

CRGB LEDs[NUM_LED];

void setup() {
  Serial.begin(115200);
  FastLED.addLeds<WS2812, CONTROL_PIN>(LEDs, NUM_LED);
  
}

void loop() {
  
}
