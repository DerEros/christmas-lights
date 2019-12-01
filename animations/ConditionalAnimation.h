#ifndef CONDITIONALANIMATION_H
#define CONDITIONALANIMATION_H

#include <memory>

#include "IAnimation.h"
#include "conditions/ICondition.h"

using namespace std;

class ConditionalAnimation : public IAnimation, public ICondition {
    private:
        shared_ptr<IAnimation> animation;
        shared_ptr<ICondition> condition;

    public:
        ConditionalAnimation(shared_ptr<IAnimation> animation, shared_ptr<ICondition> condition);
        virtual ~ConditionalAnimation();

        virtual void nextFrame() { animation->nextFrame(); }
        virtual bool isTrue() { condition->isTrue(); }
};

#endif /* CONDITIONALANIMATION_H */
