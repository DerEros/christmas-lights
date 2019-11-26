#ifndef WEBSERVER_H
#define WEBSERVER_H

#include <memory>

#include <ESP8266WebServer.h>

#include "../files/files.h"
#include "../config/ConfigurationRepo.h"

using namespace std;

class Webserver {
    private: 
        shared_ptr<Files> filesService;
        shared_ptr<ConfigurationRepo> configRepo;
        unique_ptr<ESP8266WebServer> server;

        void addConfigRoutes();

        void handleReadWifiConfig();
        void handleWriteWifiConfig();

    public:
        Webserver(shared_ptr<Files> filesService, shared_ptr<ConfigurationRepo> configRepo);
        virtual ~Webserver();
};

#endif /* WEBSERVER_H */
