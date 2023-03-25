# Sms Telegram
This library allow user to send sms message to Telegram Account via ESP32.

## Prequisites
- ESP32's peripheral, installed at firmware. 
https://github.com/ohstem-library/esp32-at-firmware
- ESP32 Library for Arduino or YoloUno

## How to use
- Send Telegram Message
    ```
    bool SmsTelegram::send_message(const char *id , const char * token, const char * message);
    ```