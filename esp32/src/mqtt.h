#pragma once
#include "WiFiClient.h"
#include "utils.h"
#include <PubSubClient.h>

WiFiClient wifiClient;
PubSubClient mqttClient(wifiClient);
struct t_mqtt {
  s_data<String> s_oled;
} mqtt;

// topic handlers

void on_oled(unsigned char *payload, unsigned int length) {
  mqtt.s_oled.put(String(payload, length));
  ((Print *)&Serial)->println(mqtt.s_oled.data);
  ((Print *)&Serial)->println(mqtt.s_oled.empty);
}

// music player

#define PLAYER_STOP "player:stop"
#define PLAYER_PLAY "player:play"
#define PLAYER_SET "player:set"

#include "player.h"

void on_stop(unsigned char *payload, unsigned int length) {
  player.stop();
}

void on_play(unsigned char *payload, unsigned int length) {
  player.play();
}

void on_set(unsigned char *payload, unsigned int length) {
  if (length > 1) return;
  int music_index = payload[0] - '0';
  if (music_index >= NB_MUSICS) {
    ((Print*)&Serial)->println("Music index > nb music");
    return;
  }
  player.set_music(&MUSICS[music_index]);
}

// topic handlers control structure

struct topic_handler {
  const char *topic;
  void (*callback)(unsigned char *payload, unsigned int length);
};

const struct topic_handler TOPICS[] = {
    {.topic = "oled", .callback = on_oled},
    {.topic = PLAYER_STOP, .callback = on_stop},
    {.topic = PLAYER_PLAY, .callback = on_play},
    {.topic = PLAYER_SET, .callback = on_set},
};
int NB_TOPICS = sizeof(TOPICS) / sizeof(struct topic_handler);

// on subscribed topic message handler

void on_message(char *topic, unsigned char *payload, unsigned int length) {
  // debug info
  ((Print *)&Serial)->print("On message [");
  ((Print *)&Serial)->print(topic);
  ((Print *)&Serial)->print("] ");
  for (int i = 0; i < length; i++) {
    ((Print *)&Serial)->print((char)payload[i]);
  }
  ((Print *)&Serial)->println();

  // handle subscribed topics
  for (int i = 0; i < NB_TOPICS; i++) {
    if (strcmp(TOPICS[i].topic, topic) == 0) {
      TOPICS[i].callback(payload, length);
    }
  }
}

void setup_mqtt(const char *mqtt_id, const char *mqtt_broker,
                const int mqtt_port) {
  // mqtt
  mqttClient.setServer(mqtt_broker, mqtt_port);
  mqttClient.setCallback(on_message);

  while (!mqttClient.connected()) {
    if (mqttClient.connect(mqtt_id)) {
      ((Print *)&Serial)->println("Connected to the MQTT broker");
    } else {
      delay(2000);
      ((Print *)&Serial)->print("Trying to connect to MQTT broker: ");
      ((Print *)&Serial)->println(mqtt_broker);
    }
  }

  for (int i = 0; i < NB_TOPICS; i++) {
    ((Print *)&Serial)->print("Subscribe to MQTT topic [");
    ((Print *)&Serial)->print(TOPICS[i].topic);
    ((Print *)&Serial)->println("]");
    if (!mqttClient.subscribe(TOPICS[i].topic)) {
      ((Print *)&Serial)->print("Error while subscribing to [");
      ((Print *)&Serial)->print(TOPICS[i].topic);
      ((Print *)&Serial)->println("]");
    }
  }
}

void loop_mqtt() { mqttClient.loop(); }
