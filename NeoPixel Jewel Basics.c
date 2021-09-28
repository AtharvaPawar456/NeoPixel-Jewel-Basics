#include <Adafruit_NeoPixel.h>
#define PIN 6

Adafruit_NeoPixel strip = Adafruit_NeoPixel(12, PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  strip.begin();
  strip.show();
}

void loop()
{
switch_led(strip.Color(255, 0, 0), 0, 7);
delay(100);
switch_led(strip.Color(255, 255, 0), 0, 7);
delay(100);
switch_led(strip.Color(0, 255, 0), 0, 7);
delay(100);
switch_led(strip.Color(0, 255, 255), 0, 7);
delay(100);
switch_led(strip.Color(0, 0, 255), 0, 7);
delay(100);
switch_led(strip.Color(255, 0, 255), 0, 7);
delay(100);
}

void switch_led(uint32_t color, int time, int led_num){
  for(uint32_t i=0; i<led_num; i++){
    strip.setPixelColor(i, color);
    strip.show();
    delay(time);}}