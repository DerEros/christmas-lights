#ifndef WEBSERVER_H
#define WEBSERVER_H

#include <memory>

#include "../files/files.h"

using namespace std;

class Webserver {
    private: 
        shared_ptr<Files> filesService;

    public:
        Webserver(shared_ptr<Files> filesService);
        virtual ~Webserver();
};

#endif /* WEBSERVER_H */
