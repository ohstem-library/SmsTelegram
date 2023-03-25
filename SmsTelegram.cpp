#include "SmsTelegram.h"

SmsTelegram::SmsTelegram(SoftwareSerial _serial){
    http = Esp32::Http(_serial);
}

void SmsTelegram::send_message(const char *id , const char * token, const char * message){
    http.request(Esp32::Http::GET, "");
}