#include "webserver.h"

#include "libraries/Arduino-Log/ArduinoLog.h"


Webserver::Webserver(shared_ptr<Files> filesService, shared_ptr<ConfigurationRepo> configRepo) {
    Log.notice("Starting Web Server\n");

    this->filesService = filesService;
    this->configRepo = configRepo;

    server = unique_ptr<ESP8266WebServer>(new ESP8266WebServer(80));
}

Webserver::~Webserver() {
    Log.notice("Stopping Web Server\n");
}
