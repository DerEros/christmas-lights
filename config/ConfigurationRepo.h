#ifndef CONFIGURATIONREPO_H
#define CONFIGURATIONREPO_H

#include <memory>

#include "../files/files.h"
#include "WiFiConfig.h"

using namespace std;

class ConfigurationRepo {
    private:
        shared_ptr<Files> filesService;

    public:
        ConfigurationRepo(shared_ptr<Files> filesService);
        virtual ~ConfigurationRepo();

        unique_ptr<WiFiConfig> getWiFiConfig();
};

#endif /* CONFIGURATIONREPO_H */
