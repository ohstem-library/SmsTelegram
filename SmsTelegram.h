#ifndef SMSTELEGRAM_H
#define SMSTELEGRAM_H

#include "SoftwareSerial.h"
#include "esp32.h"

class SmsTelegram {
    private:
        Esp32::Http http;
    public:
        SmsTelegram(SoftwareSerial* _serial);
        ~SmsTelegram();
        bool send_message(const char * id, const char * token, const char* message);
};

#endif