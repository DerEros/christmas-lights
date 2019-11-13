#include "ChristmasLights.h"

#include <Arduino.h>

#include "libraries/Arduino-Log/ArduinoLog.h"

#include "definitions.h"

ChristmasLights::ChristmasLights() {
    Serial.begin(SERIAL_SPEED);
    this->initLogging();

    Log.notice("Starting App Christmas Lights\n");
}

void ChristmasLights::initLogging() {
    Log.begin(LOG_LEVEL, &Serial);    
}

ChristmasLights::~ChristmasLights() {
    Log.notice("Destroying App Christmas Lights\n");
}
