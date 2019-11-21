#include "ChristmasLights.h"

#include <memory>
#include <Arduino.h>

#include "libraries/Arduino-Log/ArduinoLog.h"

#include "definitions.h"

#include "files/files.h"
#include "config/ConfigurationRepo.h"
#include "server/WiFiService.h"
#include "server/webserver.h"

using namespace std;

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


}
