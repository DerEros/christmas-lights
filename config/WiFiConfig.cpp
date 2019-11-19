#include "WiFiConfig.h"

WiFiConfig::WiFiConfig() {
}

WiFiConfig::WiFiConfig(String ssid, String password, WiFiMode wifiMode) {
    this->ssid = ssid;
    this->password = password;
    this->wifiMode = wifiMode;
}

WiFiConfig::~WiFiConfig() {
}

unique_ptr<WiFiConfig> WiFiConfig::fromJsonStr(String jsonStr) {

}

unique_ptr<WiFiConfig> WiFiConfig::defaultConfig() {
    const String defaultSsid = "christmas_lights";
    const String defaultPassword = "aeY375wM";
    const WiFiMode defaultWiFiMode = WiFiMode::AP;

    return unique_ptr<WiFiConfig>(new WiFiConfig(defaultSsid, defaultPassword, defaultWiFiMode));
}
