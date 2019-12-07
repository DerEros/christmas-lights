#ifndef DEFAULTANIMATIONSET_H
#define DEFAULTANIMATIONSET_H

#include <vector>
#include <memory>

#include "IAnimation.h"

using namespace std;

class DefaultAnimationSet {
    private:


    public:
        DefaultAnimationSet();
        virtual ~DefaultAnimationSet();

        virtual vector<unique_ptr<IAnimation>>& generateAnimations();
};

#endif /* DEFAULTANIMATIONSET_H */
