#ifndef ICONDITION_H
#define ICONDITION_H

class ICondition {
    public:
        virtual bool isTrue() = 0;
        virtual bool isFalse() { return !isTrue(); }
};

#endif /* ICONDITION_H */
