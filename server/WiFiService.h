#ifndef WIFI_H
#define WIFI_H

#include <memory>

#include "../config/ConfigurationRepo.h"
#include "../config/WiFiConfig.h"

using namespace std;

class WiFiService {
    private:
        shared_ptr<ConfigurationRepo> configRepo;
        unique_ptr<WiFiConfig> wifiConfig;

        bool startAP();
        bool startClient();

    public:
        WiFiService(shared_ptr<ConfigurationRepo> configRepo);
        virtual ~WiFiService();

        virtual bool start();
};

#endif /* WIFI_H */
