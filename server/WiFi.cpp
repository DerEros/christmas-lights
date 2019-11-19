#include "WiFi.h"

#include "libraries/Arduino-Log/ArduinoLog.h"

WiFi::WiFi() {
    Log.notice("Starting WiFi Service\n");
}

WiFi::~WiFi() {
    Log.notice("Stopping WiFi Service\n");
}
