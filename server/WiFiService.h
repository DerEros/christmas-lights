#ifndef WIFI_H
#define WIFI_H

#include <memory>

#include <Arduino.h>

#include "../config/ConfigurationRepo.h"
#include "../config/WiFiConfig.h"

using namespace std;

class WiFiService {
    private:
        shared_ptr<ConfigurationRepo> configRepo;
        unique_ptr<WiFiConfig> wifiConfig;

        bool startAP();
        bool startClient();

        bool startMDNS();

        bool stopAP();
        bool stopClient();

    public:
        const String hostname = "christmas-esp";

        WiFiService(shared_ptr<ConfigurationRepo> configRepo);
        virtual ~WiFiService();

        virtual bool start();
        virtual bool stop();
};

#endif /* WIFI_H */
