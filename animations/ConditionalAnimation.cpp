#include "ConditionalAnimation.h"

ConditionalAnimation::ConditionalAnimation(shared_ptr<IAnimation> animation, shared_ptr<ICondition> condition) {
    this->animation = animation;
    this->condition = condition;
}
