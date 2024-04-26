#pragma once
#include "utils.h"
#include "player.h"

// buzzer job

struct t_buzzer {
  int pin;
};

void setup_buzzer(t_buzzer &ctx, int pin) {
  ctx.pin = pin;
}

void loop_buzzer(t_buzzer &ctx) {
  if (player.update()) {
    tone(ctx.pin, player.get_note(), player.get_note_duration());
    delay(player.get_note_duration());
    noTone(ctx.pin);
  }
}
