#include <FastLED.h>
#define NUM_LEDS 125
#define DATA_PIN 2

CRGB leds[NUM_LEDS];
    
void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness( 80 );

}

void loop() {
  for(int i = 0; i < NUM_LEDS; i++) {
      int led = i;
      leds[led] = CRGB::Green; 
      FastLED.show();
      delay(5);
      
      leds[led] = CRGB::Black;
      FastLED.show();
      delay(5);
    }

   
    FastLED.show();
    delay(500);

    for(int i = 0; i < NUM_LEDS; i++) {
      int led = i;
      leds[led] = CRGB::Black; 
      
    }

    FastLED.show();
}
