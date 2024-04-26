#pragma once
#include <Arduino.h>

/*
 * Utilities
 */

#define MS (1000)
#define SEC (1000 * MS)
#define MIN (60 * SEC)

#define MAX_WAIT_FOR_TIMER 10
unsigned int waitFor(int timer, unsigned long period) {
  static unsigned long waitForTimer[MAX_WAIT_FOR_TIMER];
  unsigned long newTime = micros() / period;
  int delta = newTime - waitForTimer[timer];
  if (delta < 0)
    delta = 1 + newTime;
  if (delta)
    waitForTimer[timer] = newTime;
  return delta;
}

int timer_id_counter = 0;
int timer_id() { return timer_id_counter++; }

void panic(const char *err) {
  ((Print *)&Serial)->println(err);
  for (;;)
    ;
}

template <typename T> struct s_data {
  T data;
  bool empty;

  s_data() : empty(true) {}

  T *take() {
    if (empty)
      return nullptr;
    empty = true;
    return &data;
  }

  // put only if the data was consumed
  bool put(const T &new_data) {
    if (!empty)
      return false;
    data = new_data;
    empty = false;
    return true;
  }
};
