#ifndef IANIMATION_H
#define IANIMATION_H

class IAnimation {
    private:

    public:
        virtual void nextFrame() = 0;
        virtual void getAnimationId() = 0;
};

#endif /* IANIMATION_H */
