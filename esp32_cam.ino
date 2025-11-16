#include "esp_camera.h"

// AI Thinker ESP32-CAM Pin Definitions
#define PWDN_GPIO_NUM     32
#define RESET_GPIO_NUM    -1
#define XCLK_GPIO_NUM      0
#define SIOD_GPIO_NUM     26
#define SIOC_GPIO_NUM     27
#define Y9_GPIO_NUM       35
#define Y8_GPIO_NUM       34
#define Y7_GPIO_NUM       39
#define Y6_GPIO_NUM       36
#define Y5_GPIO_NUM       21
#define Y4_GPIO_NUM       19
#define Y3_GPIO_NUM       18
#define Y2_GPIO_NUM        5
#define VSYNC_GPIO_NUM    25
#define HREF_GPIO_NUM     23
#define PCLK_GPIO_NUM     22

#include <Arduino.h>

// Serial baud rates
#define DEBUG_BAUD 9600
#define MEGA_BAUD  9600

// ROI (Region Of Interest) for traffic light detection
#define ROI_X 50
#define ROI_Y 10
#define ROI_W 30
#define ROI_H 30

void setup() {
  Serial.begin(DEBUG_BAUD);   // for Serial Monitor
  Serial1.begin(MEGA_BAUD);   // communication to Arduino Mega

  camera_config_t config;
  config.ledc_channel = LEDC_CHANNEL_0;
  config.ledc_timer = LEDC_TIMER_0;
  config.pin_d0 = Y2_GPIO_NUM;
  config.pin_d1 = Y3_GPIO_NUM;
  config.pin_d2 = Y4_GPIO_NUM;
  config.pin_d3 = Y5_GPIO_NUM;
  config.pin_d4 = Y6_GPIO_NUM;
  config.pin_d5 = Y7_GPIO_NUM;
  config.pin_d6 = Y8_GPIO_NUM;
  config.pin_d7 = Y9_GPIO_NUM;
  config.pin_xclk = XCLK_GPIO_NUM;
  config.pin_pclk = PCLK_GPIO_NUM;
  config.pin_vsync = VSYNC_GPIO_NUM;
  config.pin_href = HREF_GPIO_NUM;
  config.pin_sscb_sda = SIOD_GPIO_NUM;
  config.pin_sscb_scl = SIOC_GPIO_NUM;
  config.pin_pwdn = PWDN_GPIO_NUM;
  config.pin_reset = RESET_GPIO_NUM;
  config.xclk_freq_hz = 20000000;
  config.pixel_format = PIXFORMAT_RGB565;  // faster than JPEG for processing
  config.frame_size = FRAMESIZE_QQVGA;     // 160x120 for speed
  config.jpeg_quality = 12;
  config.fb_count = 1;

  if (esp_camera_init(&config) != ESP_OK) {
    Serial.println("Camera init failed");
    while(true);
  }

  Serial.println("Camera ready");
}

void loop() {
  camera_fb_t * fb = esp_camera_fb_get();
  if(!fb) {
    Serial.println("Camera capture failed");
    return;
  }

  int redCount = 0;
  int greenCount = 0;

  // Simple color detection in ROI
  for(int y=ROI_Y; y<ROI_Y+ROI_H; y++){
    for(int x=ROI_X; x<ROI_X+ROI_W; x++){
      int pix = ((uint16_t*)fb->buf)[y*fb->width + x];
      uint8_t r = (pix >> 11) & 0x1F; // 5-bit red
      uint8_t g = (pix >> 5) & 0x3F;  // 6-bit green
      uint8_t b = pix & 0x1F;         // 5-bit blue

      if(r > 20 && g < 15 && b < 15) redCount++;
      if(g > 20 && r < 15 && b < 15) greenCount++;
    }
  }

  char signal = (redCount > greenCount) ? 'R' : 'G';
  Serial1.write(signal);       // send to Mega
  Serial.print("Traffic: ");   // debug
  Serial.println(signal);

  esp_camera_fb_return(fb);
  delay(300); // adjust delay for speed
}
