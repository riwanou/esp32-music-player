#pragma once
#include "utils.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <SPI.h>
#include <Wire.h>

struct t_oled {
  int timer;
  unsigned long period;
  int counter;
  Adafruit_SSD1306 *display;
  int width;
  int height;
  s_data<String> *s_mqtt_counter;
  String val_mqtt_counter;
};

void setup_oled(t_oled &ctx, int timer, unsigned long period,
                s_data<String> *s_mqtt_counter, Adafruit_SSD1306 *display,
                int width, int height) {
  ctx.timer = timer;
  ctx.period = period;
  ctx.counter = -1;
  ctx.s_mqtt_counter = s_mqtt_counter;

  ctx.display = display;
  ctx.width = width;
  ctx.height = height;

  Wire.begin(4, 15);
  if (!ctx.display->begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    panic("SSD1306 allocation failed");
  }
}

void update(t_oled &ctx) {
  if (String *val = ctx.s_mqtt_counter->take()) {
    ctx.val_mqtt_counter = *val;
  }

  if (!waitFor(ctx.timer, ctx.period))
    return;
  ctx.counter++;
}

void render(t_oled &ctx) {
  ctx.display->setTextSize(2);
  ctx.display->setTextColor(WHITE);

  ctx.display->setCursor(ctx.width / 3, 0);
  ctx.display->println(ctx.counter);

  ctx.display->setCursor(5, ctx.height / 2.5);
  ctx.display->print(ctx.val_mqtt_counter);
}

void loop_oled(t_oled &ctx) {
  update(ctx);
  ctx.display->clearDisplay();
  render(ctx);
  ctx.display->display();
}
