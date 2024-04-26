#pragma once
#include "mqtt.h"
#include "utils.h"

struct t_pbut {
  int last_state;
  int pub_timer;
  unsigned long pub_period;
  int pin;
};

void setup_pbut(t_pbut &ctx, int pub_timer, unsigned long pub_period, int pin) {
  ctx.last_state = 0;
  ctx.pub_timer = pub_timer;
  ctx.pub_period = pub_period;
  ctx.pin = pin;
  pinMode(ctx.pin, INPUT_PULLUP);
}

void loop_pbut(t_pbut &ctx) {
  int state = 1 - digitalRead(ctx.pin);

  // trigger one time on state change, turn music player on/off
  if (state != ctx.last_state && state == 1) {
    mqttClient.publish(player.is_paused() ? PLAYER_PLAY : PLAYER_STOP, 0);
  }
  ctx.last_state = state;

  if (!waitFor(ctx.pub_timer, ctx.pub_period))
    return;
  
  mqttClient.publish("pbut", String(state).c_str());
}
