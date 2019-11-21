#include "WiFiService.h"

#include <ESP8266WiFi.h>

#include "libraries/Arduino-Log/ArduinoLog.h"

WiFiService::WiFiService(shared_ptr<ConfigurationRepo> configRepo) {
    Log.notice("Starting WiFi Service\n");

    this->configRepo = configRepo;
    this->wifiConfig = configRepo->getWiFiConfig();
}

WiFiService::~WiFiService() {
    Log.notice("Stopping WiFi Service\n");
}

bool WiFiService::start() {
   if (this->wifiConfig->getWiFiMode() == WiFiConfig::AP)  {
        return startAP();
   } else {
        return startClient();
   }
}

bool WiFiService::startAP() {
    Log.notice("Starting WiFi in AP mode\n");

    return WiFi.softAP(this->wifiConfig->getSsid(), this->wifiConfig->getPassword());
}

bool WiFiService::startClient() {
    Log.notice("Starting WiFi in client mode\n");
    return false;
}

bool WiFiService::stop() {
    if (this->wifiConfig->getWiFiMode() == WiFiConfig::AP) {
        return stopAP();
    } else {
        return stopClient();
    }
}

bool WiFiService::stopAP() {
    Log.notice("Stopping WiFi in AP mode\n");

    return false;
}

bool WiFiService::stopClient() {
    Log.notice("Stopping WiFi in client mode\n");
    return false;
}
