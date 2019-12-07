#ifndef DUMMYANIMATION_H
#define DUMMYANIMATION_H

#include <Arduino.h>

#include "IAnimation.h"

class DummyAnimation : public IAnimation {
    private:


    public:
        DummyAnimation() {};
        virtual ~DummyAnimation() {};

        virtual void nextFrame() {}
        virtual String getAnimationId() { return "DummyAnimation"; }
};

#endif /* DUMMYANIMATION_H */
