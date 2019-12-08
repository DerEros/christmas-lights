#include "LedArray.h"

#include "libraries/Arduino-Log/ArduinoLog.h"

LedArray::LedArray(unsigned int size) {
    Log.notice("Initializing LED array\n");

    this->size = size;
    leds = unique_ptr<CRGB>(new CRGB[size]);
}

LedArray::~LedArray() {
    Log.notice("Deconstructing LED array\n");
}
