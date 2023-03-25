#ifndef SMSTELEGRAM_H
#define SMSTELEGRAM_H

#include "esp32-mqtt/esp32.h"
#include "SoftwareSerial.h"

class SmsTelegram {
    private:
        Esp32::Http http;
    public:
        SmsTelegram(SoftwareSerial _serial);
        ~SmsTelegram();
        void send_message(const char * id, const char * token, const char* message);
}

#endif