#define BLYNK_TEMPLATE_ID "TMPL3PaocSNSL"
#define BLYNK_TEMPLATE_NAME "LIFESYSTEM"
#define BLYNK_AUTH_TOKEN "RtAWHxxhWDQDnr8p9p5GR8SfwzBM62Fv" // <--- Paste it here

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <Adafruit_MPU6050.h>
#include <Wire.h>

char ssid[] = "vivo Y56 5G"; 
char pass[] = "0987654321"; 

#define BUZZER_PIN 18

void setup() {
  Serial.begin(115200);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW); // Stop the beeping

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
}