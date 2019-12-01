#ifndef DUMMYANIMATION_H
#define DUMMYANIMATION_H

#include "IAnimation.h"

class DummyAnimation : public IAnimation {
    private:


    public:
        DummyAnimation();
        virtual ~DummyAnimation();

        virtual void nextFrame() {}
};

#endif /* DUMMYANIMATION_H */
