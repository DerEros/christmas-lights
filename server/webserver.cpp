#include "webserver.h"

#include "libraries/Arduino-Log/ArduinoLog.h"

Webserver::Webserver() {
    Log.notice("Starting Web Server\n");
}

Webserver::~Webserver() {
    Log.notice("Stopping Web Server\n");
}
