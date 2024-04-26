#pragma once
#include "utils.h"
#include <WiFi.h>

void setup_net(const char *ssid, const char *pass) {
  // wifi
  int status = WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(2000);
    ((Print *)&Serial)->print("Trying to connect to open SSID: ");
    ((Print *)&Serial)->println(ssid);
  }

  ((Print *)&Serial)->println("Connected to the network");
  ((Print *)&Serial)->print("SSID: ");
  ((Print *)&Serial)->println(WiFi.SSID());

  long rssi = WiFi.RSSI();
  ((Print *)&Serial)->print("Signal strength (RSSI):");
  ((Print *)&Serial)->println(rssi);

  IPAddress ip = WiFi.localIP();
  ((Print *)&Serial)->print("IP Address: ");
  ((Print *)&Serial)->println(ip);

  IPAddress gateway = WiFi.gatewayIP();
  ((Print *)&Serial)->print("Gateway: ");
  ((Print *)&Serial)->println(gateway);
}
