#include <Arduino.h>

#include <esp_event_loop.h>
#include <esp_log.h>
#include "esp_timer.h"
#include "esp_camera.h"

#include <WiFi.h>
#include "img_converters.h"
#include "Arduino.h"
#include "fb_gfx.h"
#include "soc/soc.h"          //disable brownout problems
#include "soc/rtc_cntl_reg.h" //disable brownout problems
//#include "dl_lib.h"
#include "esp_http_server.h" // API https://docs.espressif.com/projects/esp-idf/en/latest/api-reference/protocols/esp_http_server.html

//Replace with your network credentials - Remplacez par vos identificants de connexion WiFi
const char *ssid = "UMONS-STUDENT";
const char *password = "";

#define flashLight 4

#define PWDN_GPIO_NUM  32
#define RESET_GPIO_NUM -1
#define XCLK_GPIO_NUM  0
#define SIOD_GPIO_NUM  26
#define SIOC_GPIO_NUM  27
#define Y9_GPIO_NUM    35
#define Y8_GPIO_NUM    34
#define Y7_GPIO_NUM    39
#define Y6_GPIO_NUM    36
#define Y5_GPIO_NUM    21
#define Y4_GPIO_NUM    19
#define Y3_GPIO_NUM    18
#define Y2_GPIO_NUM    5
#define VSYNC_GPIO_NUM 25
#define HREF_GPIO_NUM  23
#define PCLK_GPIO_NUM  22

void setup() {
  // put your setup code here, to run once:
  pinMode(flashLight, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  digitalWrite(flashLight, HIGH);
  delay(1000);
  digitalWrite( flashLight, LOW);
}