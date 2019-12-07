#ifndef IANIMATION_H
#define IANIMATION_H

#include <Arduino.h>

class IAnimation {
    private:

    public:
        virtual void nextFrame() = 0;
        virtual String getAnimationId() = 0;
};

#endif /* IANIMATION_H */
