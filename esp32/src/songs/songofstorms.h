#pragma once
#include "pitches.h"

int STORM_MELODY[] = {
    // Song of storms - The Legend of Zelda Ocarina of Time.
    // Score available at https://musescore.com/user/4957541/scores/1545401

    NOTE_D4, 4,  NOTE_A4, 4,  NOTE_A4, 4,  REST,    8,  NOTE_E4, 8, NOTE_B4, 2,
    NOTE_F4, 4,  NOTE_C5, 4,  NOTE_C5, 4,  REST,    8,  NOTE_E4, 8, NOTE_B4, 2,
    NOTE_D4, 4,  NOTE_A4, 4,  NOTE_A4, 4,  REST,    8,  NOTE_E4, 8, NOTE_B4, 2,
    NOTE_F4, 4,  NOTE_C5, 4,  NOTE_C5, 4,  REST,    8,  NOTE_E4, 8, NOTE_B4, 2,
    NOTE_D4, 8,  NOTE_F4, 8,  NOTE_D5, 2,

    NOTE_D4, 8,  NOTE_F4, 8,  NOTE_D5, 2,  NOTE_E5, -4, NOTE_F5, 8, NOTE_E5, 8,
    NOTE_E5, 8,  NOTE_E5, 8,  NOTE_C5, 8,  NOTE_A4, 2,  NOTE_A4, 4, NOTE_D4, 4,
    NOTE_F4, 8,  NOTE_G4, 8,  NOTE_A4, -2, NOTE_A4, 4,  NOTE_D4, 4, NOTE_F4, 8,
    NOTE_G4, 8,  NOTE_E4, -2, NOTE_D4, 8,  NOTE_F4, 8,  NOTE_D5, 2, NOTE_D4, 8,
    NOTE_F4, 8,  NOTE_D5, 2,

    NOTE_E5, -4, NOTE_F5, 8,  NOTE_E5, 8,  NOTE_E5, 8,  NOTE_E5, 8, NOTE_C5, 8,
    NOTE_A4, 2,  NOTE_A4, 4,  NOTE_D4, 4,  NOTE_F4, 8,  NOTE_G4, 8, NOTE_A4, 2,
    NOTE_A4, 4,  NOTE_D4, 1,
};
int STORM_TEMPO = 108;
int STORM_NB_NOTES= sizeof(STORM_MELODY) / sizeof(STORM_MELODY[0]) / 2;
