#include "files.h"

#include "libraries/Arduino-Log/ArduinoLog.h"

#include "FS.h"

Files::Files() {
    Log.notice("Starting Files Service\n");

    if (!SPIFFS.begin()) {
        Log.fatal("Could not mount file system. Halting to prevent further program execution.");
        while (true) {}
    }
}

Files::~Files() {
    Log.notice("Stopping Files Service\n");

    SPIFFS.end();
}
