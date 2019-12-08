#include "Conductor.h"

#include <memory>

#include "../libraries/Arduino-Log/ArduinoLog.h"

#include "conditions/FixedValueCondition.h"
#include "DummyAnimation.h"

Conductor::Conductor(shared_ptr<ConfigurationRepo> configRepo) {
    Log.notice("Starting Animation Conductor Service\n");

    this->configRepo = configRepo;
}

Conductor::~Conductor() {
}

void Conductor::loadAnimations() {
    Log.notice("Loading animations based on config\n");

    animations.clear();

    animations.push_back(
        ConditionalAnimation(
                make_shared<DummyAnimation>(),
                make_shared<FixedValueCondition>(true)
        )
    );
}

void Conductor::nextFrame() {
    for (auto& conditionalAnimation: animations) {

        if (conditionalAnimation.isTrue()) {
            conditionalAnimation.nextFrame();
        }
    }
}
