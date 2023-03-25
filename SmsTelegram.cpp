#include "SmsTelegram.h"

SmsTelegram::SmsTelegram(SoftwareSerial* _serial){
    http = Esp32::Http(_serial);
}

SmsTelegram::~SmsTelegram(){

}

bool SmsTelegram::send_message(const char *id , const char * token, const char * message){
    char request[512];
    snprintf(request,512,"http://103.170.122.203:8893/telesms?token=%s&id=%s&text=%s",
                    token,
                    id,
                    message);
    return http.request(Esp32::Http::GET, request, 10); // Timeout after 10 miliseconds
}