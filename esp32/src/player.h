#pragma once
#include "mqtt.h"
#include "pitches.h"
#include "songs/harrypotter.h"
#include "songs/miichannel.h"
#include "songs/professorlayton.h"
#include "songs/jigglypuffsong.h"
#include "songs/thegodfather.h"
#include "songs/songofstorms.h"
#include "utils.h"

// Musics

struct music {
  int *melody;
  int nb_notes;
  int tempo;
};

struct music MUSICS[] = {
    {.melody = LAYTON_MELODY,
     .nb_notes = LAYTON_NB_NOTES,
     .tempo = LAYTON_TEMPO},
    {.melody = HARRY_MELODY, .nb_notes = HARRY_NB_NOTES, .tempo = HARRY_TEMPO},
    {.melody = MII_MELODY, .nb_notes = MII_NB_NOTES, .tempo = MII_TEMPO},
    {.melody = JIGGLY_MELODY, .nb_notes = JIGGLY_NB_NOTES, .tempo = JIGGLY_TEMPO},
    {.melody = GODFATHER_MELODY, .nb_notes = GODFATHER_NB_NOTES, .tempo = GODFATHER_TEMPO},
    {.melody = STORM_MELODY, .nb_notes = STORM_NB_NOTES, .tempo = STORM_TEMPO}
  };

int NB_MUSICS = sizeof(MUSICS) / sizeof(struct music);

// Music player

class music_player {
public:
  music_player() {
    curr_music = NULL;
    curr_note_index = 0;
    wholenote = 0;
    tempo = 0;
    paused = true;
    note = 0;
    note_duration = 0;
  }

  void set_music(struct music *music) {
    curr_music = music;
    curr_note_index = 0;
    tempo = curr_music->tempo;
  }

  void play() { paused = false; }
  void stop() { paused = true; }
  void turn() { paused = !paused; }
  bool finished() { return (curr_note_index >= curr_music->nb_notes * 2); }

  int is_paused() { return paused; }
  int get_note() { return note; }
  int get_note_duration() { return note_duration; }

  // update the current music, return true if the music should be played
  bool update() {
    if (!curr_music || paused)
      return false;

    if (finished()) {
      mqttClient.publish(PLAYER_STOP, 0);
      curr_note_index = 0;
      return false;
    }

    note_duration = 0;
    int wholenote = (60000 * 2) / tempo;

    int divider = curr_music->melody[curr_note_index + 1];
    if (divider > 0) {
      note_duration = wholenote / divider;
    } else if (divider < 0) {
      note_duration = wholenote / abs(divider);
      note_duration *= 1.5;
    }

    note = curr_music->melody[curr_note_index];
    note_duration *= 0.9;

    curr_note_index += 2;
    return true;
  }

private:
  struct music *curr_music;
  int curr_note_index;
  int wholenote;
  int tempo;
  bool paused;
  int note;
  int note_duration;
};

struct music_player player;
