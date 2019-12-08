#include "ChristmasLights.h"

#include <memory>
#include <Arduino.h>

#include "libraries/Arduino-Log/ArduinoLog.h"

#include "definitions.h"

#include "files/files.h"
#include "config/ConfigurationRepo.h"
#include "server/WiFiService.h"
#include "server/webserver.h"

#include "animations/Conductor.h"
#include "animations/LedArray.h"

using namespace std;

//TODO: read from config instead of hard coding
const int NUM_OF_LEDS = 8;

ChristmasLights::ChristmasLights() {
    Serial.begin(SERIAL_SPEED);
    this->initLogging();

    Log.notice("Starting App Christmas Lights\n");
}

ChristmasLights::~ChristmasLights() {
    Log.notice("Destroying App Christmas Lights\n");
}

void ChristmasLights::initLogging() {
    Log.begin(LOG_LEVEL, &Serial);    
}

void ChristmasLights::initServices() {
    Log.notice("Beginning initialization of services\n");

    auto filesService = make_shared<Files>();
    auto configRepo = make_shared<ConfigurationRepo>(filesService);
    auto wifiService = make_shared<WiFiService>(configRepo);
    auto webserver = make_shared<Webserver>(filesService, configRepo);

    auto ledArray = make_shared<LedArray>(NUM_OF_LEDS);
    auto conductor = make_shared<Conductor>(configRepo);
}
