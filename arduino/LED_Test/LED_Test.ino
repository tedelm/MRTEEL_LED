#include <FastLED.h>
#define LED_PIN     5
#define NUM_LEDS    2
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<WS2812, LED_PIN, RGB>(leds, NUM_LEDS);

  leds[0] = CRGB(255, 0, 0); //Red
  leds[1] = CRGB(0, 255, 0); //Green
  FastLED.show();  
  
}

//leds[0] = CRGB(255, 0, 0); //GREEN
//leds[0] = CRGB(0, 255, 0); //Green
//leds[0] = CRGB(0, 0, 255); //Blue
//leds[0] = CRGB(255, 255, 255); //White

void loop() {
  

  delay(2000);  
}
