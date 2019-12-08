#ifndef LEDARRAY_H
#define LEDARRAY_H

#include <memory>

#include "libraries/FastLED/FastLED.h"

using namespace std;

class LedArray {
    private:
        unsigned int size;
        unique_ptr<CRGB> leds;

    public:
        LedArray(unsigned int size);
        virtual ~LedArray();

        unsigned int getSize() { return size; }
        CRGB* getRaw() { return leds.get(); }
};

#endif /* LEDARRAY_H */
