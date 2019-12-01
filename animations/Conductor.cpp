#include "Conductor.h"

#include "../libraries/Arduino-Log/ArduinoLog.h"

Conductor::Conductor(shared_ptr<ConfigurationRepo> configRepo) {
    Log.notice("Starting Animation Conductor Service\n");

    this->configRepo = configRepo;
}

Conductor::~Conductor() {
}

void Conductor::nextFrame() {
    for (auto& conditionalAnimation: animations) {

        if (conditionalAnimation.isTrue()) {
            conditionalAnimation.nextFrame();
        }
    }
}
