#ifndef WIFICONFIG_H
#define WIFICONFIG_H

#include <memory>

#include <Arduino.h>

using namespace std;

class WiFiConfig {
    public:
        enum WiFiMode {
            CLIENT,
            AP
        };

    private: 
        String ssid;
        String password;
        WiFiMode wifiMode;

        WiFiConfig(String ssid, String password, WiFiMode wifiMode);

    public:
        WiFiConfig();
        virtual ~WiFiConfig();

        static unique_ptr<WiFiConfig> fromJsonStr(String jsonStr);
        static unique_ptr<WiFiConfig> defaultConfig();

        String getSsid() { return this->ssid; }
        WiFiMode getWiFiMode() { return this->wifiMode; }
};

#endif /* WIFICONFIG_H */
