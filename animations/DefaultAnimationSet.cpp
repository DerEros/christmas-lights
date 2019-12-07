#include "DefaultAnimationSet.h"

#include "libraries/Arduino-Log/ArduinoLog.h"

#include "DummyAnimation.h"

DefaultAnimationSet::DefaultAnimationSet() {
    Log.notice("Generating default animation set\n");
}

DefaultAnimationSet::~DefaultAnimationSet() { }

vector<unique_ptr<IAnimation> >& DefaultAnimationSet::generateAnimations() {
    Log.trace("Generating animation set\n");

    vector<unique_ptr<IAnimation>> animations;

    animations.push_back(unique_ptr<IAnimation>(new DummyAnimation()));

    return animations;
}
