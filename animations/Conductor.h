#ifndef CONDUCTOR_H
#define CONDUCTOR_H

#include <memory>
#include <vector>

#include "../config/ConfigurationRepo.h"

#include "ConditionalAnimation.h"

using namespace std;

class Conductor {
    private:
        shared_ptr<ConfigurationRepo> configRepo;
        vector<ConditionalAnimation> animations;

    public:
        Conductor(shared_ptr<ConfigurationRepo> configRepo);
        virtual ~Conductor();

        virtual void nextFrame();
};

#endif /* CONDUCTOR_H */
