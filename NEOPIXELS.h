#ifndef NEOPIXELS_H
#define NEOPIXELS_H

// User Defines here
#define NEOPIXEL_PIN C1
#define NUMPIXELS 1
// User defines end

void pixels_begin();
void pixels_SendBit(uint8_t bit);
void pixels_SendColour(uint8_t red, uint8_t green, uint8_t blue);
void pixels_setPixelColor(uint8_t pixel, uint8_t red, uint8_t green, uint8_t blue);
void pixels_clear();
void pixels_fill(uint8_t red, uint8_t green, uint8_t blue);
void ColorHSV(u_int32_t hue, u_int32_t sat, u_int32_t val, uint8_t rgb[3]);
void pixels_show();
#endif /* USER_NOPIXEL_H */