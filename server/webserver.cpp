#include "webserver.h"

#include "libraries/Arduino-Log/ArduinoLog.h"

Webserver::Webserver(shared_ptr<Files> filesService) {
    Log.notice("Starting Web Server\n");

    this->filesService = filesService;
}

Webserver::~Webserver() {
    Log.notice("Stopping Web Server\n");
}
