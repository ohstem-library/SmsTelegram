#include "SoftwareSerial.h"
#include "esp32.h"
#include "SmsTelegram.h"


SoftwareSerial esp_serial(2,3);
Esp32::Wifi wifi(&esp_serial);
SmsTelegram sms_client(&esp_serial);

void setup(){
    Serial.begin(115200);
    esp_serial.begin(115200);

    if(wifi.restart()){
        Serial.println("Wifi restart successful");
    }

    if(wifi.connect_to_ap("Ot Dieu", "abcd@1234")){
        Serial.println("Connected to Wifi");
    }

}


void loop(){
  if(sms_client.send_message("-902514485","6226700739:AAE1YfFukNW7SE-19ZBcEWOrpYasECrrdCo", "MessageTest")){
    Serial.println("Send Message Successful");
  }
  delay(5000);
}