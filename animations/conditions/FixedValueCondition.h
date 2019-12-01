#ifndef FIXEDVALUECONDITION_H
#define FIXEDVALUECONDITION_H

#include "ICondition.h"

class FixedValueCondition : public ICondition {
    private:
        bool fixedValue;

    public:
        FixedValueCondition(bool value) { this->fixedValue = value; }
        virtual ~FixedValueCondition() {};

        virtual bool isTrue() { return fixedValue; }
};

#endif /* FIXEDVALUECONDITION_H */
