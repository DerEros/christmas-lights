#include "ConfigurationRepo.h"

#include "libraries/Arduino-Log/ArduinoLog.h"

ConfigurationRepo::ConfigurationRepo(shared_ptr<Files> filesService) {
    Log.notice("Starting Config Repo\n");

    this->filesService = filesService;
}

ConfigurationRepo::~ConfigurationRepo() {
    Log.notice("Stopping Config Repo\n");
}

unique_ptr<WiFiConfig> ConfigurationRepo::getWiFiConfig() {
    return WiFiConfig::defaultConfig();
}
