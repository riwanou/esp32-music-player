#pragma once
#include "utils.h"

struct t_serial {
  s_data<char> s_oled;
};

void setup_serial(t_serial &ctx) { ctx.s_oled.put('a'); }

void loop_serial(t_serial &ctx) {
  if (Serial.available() <= 0)
    return;

  char in_char = (char)Serial.read();
  ctx.s_oled.put(in_char);
}
