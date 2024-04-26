#include "mqtt.h"
#include "pbut.h"
#include "oled.h"
#include "serial.h"
#include "net.h"
#include "buzzer.h"

#define DISPLAY_WIDTH 128
#define DISPLAY_HEIGHT 64
#define OLED_RESET 16
Adafruit_SSD1306 display(DISPLAY_WIDTH, DISPLAY_HEIGHT, &Wire, OLED_RESET);

struct t_oled oled;
struct t_pbut pbut;
struct t_serial serial;
struct t_buzzer buzzer;

const char* SSID = "TO BE COMPLETED";
const char* WIFI_PASS = "TO BE COMPLETED";
const char* MQTT_ID = "esp32-client";
const char* MQTT_BROKER = "pi.local";
const int MQTT_PORT = 1883;

void setup() {
  Serial.begin(9600);

  // music player
  player.set_music(&MUSICS[0]);
  mqttClient.publish(PLAYER_STOP, 0);

  // tasks
  setup_net(SSID, WIFI_PASS);
  setup_mqtt(MQTT_ID, MQTT_BROKER, MQTT_PORT);
  setup_oled(oled, timer_id(), SEC, &mqtt.s_oled, &display, DISPLAY_WIDTH,
             DISPLAY_HEIGHT);
  setup_serial(serial);
  setup_pbut(pbut, timer_id(), 200 * MS, 23);
  setup_buzzer(buzzer, 17);
}

void loop() {
  loop_mqtt();
  loop_oled(oled);
  loop_serial(serial);
  loop_pbut(pbut);
  loop_buzzer(buzzer);
}
