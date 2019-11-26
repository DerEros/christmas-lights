#include "webserver.h"

#include <functional>

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

void Webserver::addConfigRoutes() {
    Log.trace("Adding config routes\n");

    server->on("/config/wifi", HTTP_GET, std::bind(&Webserver::handleReadWifiConfig, this));
    server->on("/config/wifi", HTTP_POST, std::bind(&Webserver::handleWriteWifiConfig, this));
}

void Webserver::handleReadWifiConfig() {
    Log.trace("WiFi configuration was requested\n");
}

void Webserver::handleWriteWifiConfig() {
    Log.trace("WiFi configuration was uploaded\n");
}
