#pragma once
#include "pitches.h"

int LAYTON_MELODY[] = {
    // Professor Layton's theme from
    // Professor Layton and the Courious village
    // From the score by OliviaJelks
    // available at https://musescore.com/user/311366/scores/373161

    // A B E bemol
    NOTE_D5,  1,  NOTE_DS5, 1,

    NOTE_F5,  1, // 7
    REST,     4,  NOTE_F5,  -4, NOTE_DS5, 8,  NOTE_D5,  8,   NOTE_F5,  1,
    NOTE_AS4, 8,  NOTE_G4,  -2, NOTE_F4,  1,  NOTE_F4,  1,

    REST,     4, // 12
    REST,     8,  NOTE_F4,  8,  NOTE_G4,  8,  NOTE_GS4, 8,   NOTE_AS4, 8,
    NOTE_C5,  8,  NOTE_D5,  1,  NOTE_DS5, 1,  NOTE_F5,  1,   NOTE_F5,  -4,
    NOTE_DS5, 8,  NOTE_D5,  8,  NOTE_CS5, 8,  NOTE_C5,  -2,  NOTE_AS4, 8,

    NOTE_G4,  1, // 18
    NOTE_F4,  -1, REST,     4,  NOTE_D5,  -4, REST,     16,  NOTE_D5,  16,
    NOTE_D5,  2,  REST,     4,  NOTE_D5,  8,  NOTE_DS5, 8,   NOTE_F5,  8,
    NOTE_G5,  8,  NOTE_F5,  8,  NOTE_DS5, 8,  NOTE_D5,  8,

    NOTE_D5,  -4, NOTE_DS5, 16, NOTE_DS5, 2, // 23
    REST,     4,  NOTE_G4,  8,  NOTE_C5,  8,  NOTE_D5,  8,   NOTE_DS5, 8,
    NOTE_F5,  8,  NOTE_DS5, 8,  NOTE_D5,  8,  NOTE_C5,  -4,  REST,     16,
    NOTE_G4,  2,  REST,     4,  NOTE_G4,  8,  NOTE_GS4, 8,   NOTE_AS4, 8,
    NOTE_C5,  8,  NOTE_AS4, 8,  NOTE_GS4, 8,  NOTE_G5,  8,

    NOTE_F4,  -4, NOTE_AS4, -4, NOTE_G4,  2, // 27
    REST,     8,  NOTE_C4,  8,  NOTE_D4,  8,  NOTE_DS4, 8,   NOTE_G4,  8,
    NOTE_C5,  8,  NOTE_D5,  -4, REST,     16, NOTE_D5,  -16, NOTE_D5,  2,
    REST,     4,  NOTE_D5,  8,  NOTE_DS5, 8,  NOTE_F5,  8,   NOTE_G5,  8,
    NOTE_F5,  8,  NOTE_DS5, 8,  NOTE_D5,  8,  NOTE_D5,  -4,  NOTE_DS5, -16,
    NOTE_DS5, 2,

    REST,     4,  NOTE_C5,  8,  NOTE_D5,  8,  NOTE_DS5, 8,   NOTE_F5,  8,
    NOTE_DS5, 8,  NOTE_D5,  8,  NOTE_AS4, 8, // 32
    NOTE_AS4, -4, NOTE_C5,  -4, NOTE_C5,  -4, NOTE_F4,  -4,  REST,     8,
    NOTE_G4,  4,  NOTE_D5,  4,  NOTE_DS5, 4,  NOTE_D5,  -4,  REST,     16,
    NOTE_C5,  16, NOTE_C5,  2,

    REST,     4,  NOTE_D5,  4,  NOTE_DS5, 4,  NOTE_F5,  4, // 36
    NOTE_G5,  -4, REST,     16, NOTE_F5,  2,  NOTE_AS5, -4,  NOTE_G5,  -4,
    NOTE_DS5, 4,

    NOTE_D5,  -4, REST,     16, NOTE_DS5, 2, // 39
    REST,     4,  NOTE_C5,  8,  NOTE_D5,  8,  NOTE_DS5, 8,   NOTE_E5,  8,
    NOTE_F5,  8,  NOTE_FS5, 8,  NOTE_G5,  -4, NOTE_F5,  -4,  REST,     4,
    NOTE_AS5, 2,

    NOTE_G5,  4,  NOTE_F5,  8,  NOTE_G5,  8,  REST,     8,   NOTE_E5,  8, // 42
    REST,     8,  NOTE_D5,  8,  NOTE_C5,  -2, REST,     8,   NOTE_G4,  8,
    NOTE_A4,  8,  NOTE_AS4, 8,  NOTE_C5,  8,  NOTE_D5,  8,   NOTE_DS5, 8,

    NOTE_DS5, -4, NOTE_D5,  -4, NOTE_AS4, 4, // 45
    REST,     4,  NOTE_DS5, 8,  NOTE_E5,  8,  NOTE_F5,  4,   NOTE_E5,  8,
    NOTE_DS5, 8,  NOTE_D5,  8,  NOTE_AS5, 8,  NOTE_C5,  4,   NOTE_G4,  8,
    NOTE_D5,  4,  NOTE_G4,  8,  NOTE_D5,  4,  REST,     8,   NOTE_FS5, 8,
    NOTE_G5,  8,  NOTE_FS5, 8,  NOTE_F5,  8,  NOTE_DS5, 8,   NOTE_D5,  8,
    NOTE_DS5, 8,

    REST,     8,  NOTE_AS5, 8,  NOTE_G5,  8,  NOTE_DS5, 8,   NOTE_F5,  8,
    REST,     8,  NOTE_G5,  8, // 49
    REST,     8,  NOTE_FS5, 8,  NOTE_F5,  8,  NOTE_DS5, 8,   NOTE_F5,  8,
    NOTE_DS5, 8,  NOTE_D5,  8,  NOTE_DS5, 8,  NOTE_D5,  -4,  NOTE_C5,  -4,
    REST,     4,  REST,     4,  NOTE_C5,  8,  NOTE_D5,  8,   NOTE_DS5, 8,
    NOTE_D5,  8,  NOTE_C5,  8,  NOTE_AS4, 8,

    NOTE_D5,  8,  NOTE_DS5, 8,  NOTE_F5,  8,  NOTE_G5,  8,   NOTE_D5,  8,
    NOTE_C5,  8,  NOTE_D5,  8,  NOTE_DS5, 8, // 53
    NOTE_F5,  8,  NOTE_G5,  8,  NOTE_AS5, 8,  NOTE_GS5, 8,   NOTE_G5,  8,
    NOTE_F5,  8,  NOTE_DS5, 8,  NOTE_F5,  8,  NOTE_DS5, 8,   NOTE_D5,  16,
    NOTE_DS5, 16, NOTE_D5,  16, NOTE_AS4, 8,  NOTE_C5,  8,   NOTE_D5,  8,
    NOTE_DS5, 8,  NOTE_F5,  8,  NOTE_G5,  8,  NOTE_AS5, 8,   NOTE_GS5, 8,
    NOTE_G5,  8,  NOTE_F5,  8,  NOTE_DS5, 8,  NOTE_D5,  8,   NOTE_DS5, 8,

    NOTE_C5,  8,  NOTE_D5,  8,  NOTE_DS5, 8,  NOTE_F5,  8,   NOTE_C5,  8,
    NOTE_G4,  8,  NOTE_C5,  8,  NOTE_D5,  8, // 57
    NOTE_DS5, 8,  NOTE_F5,  8,  NOTE_AS5, 8,  NOTE_F5,  8,   NOTE_DS5, 8,
    NOTE_D5,  8,  NOTE_AS4, 8,  NOTE_DS5, 8,  NOTE_D5,  8,   NOTE_D5,  16,
    NOTE_DS5, 16, NOTE_D5,  16, NOTE_G4,  8,  NOTE_C5,  8,   NOTE_D5,  8,
    NOTE_DS5, 8,  NOTE_F5,  8,  NOTE_F5,  8,  NOTE_AS5, 8,   NOTE_F5,  8,
    NOTE_DS5, 8,  NOTE_D5,  8,  NOTE_DS5, 8,  NOTE_D5,  8,   NOTE_AS4, 8,

    NOTE_D5,  8,  NOTE_DS5, 8,  NOTE_F5,  8,  NOTE_G5,  8,   NOTE_AS4, 8,
    NOTE_G4,  8,  NOTE_AS4, 8,  NOTE_DS5, 8, // 61
    NOTE_AS5, 8,  NOTE_DS5, 8,  NOTE_AS5, 8,  NOTE_GS5, 8,   NOTE_G5,  8,
    NOTE_GS5, 8,  NOTE_G5,  8,  NOTE_F5,  8,  NOTE_DS5, 8,   NOTE_D5,  16,
    NOTE_DS5, 16, NOTE_D5,  16, NOTE_AS4, 8,  NOTE_C5,  8,   NOTE_D5,  8,
    NOTE_DS5, 8,  NOTE_F5,  8,

    NOTE_C6,  8,  NOTE_D5,  8,  NOTE_AS5, 8,  NOTE_D5,  8,   NOTE_C5,  8,
    NOTE_D5,  8,  NOTE_B5,  8,  NOTE_G4,  8, // 64
    NOTE_C4,  8,  NOTE_DS4, 8,  NOTE_G4,  8,  NOTE_C5,  8,   NOTE_DS5, 8,
    NOTE_G5,  8,  REST,     8,  NOTE_C5,  8,  NOTE_D5,  8,   NOTE_DS5, 8,
    NOTE_D5,  16, NOTE_DS5, 16, NOTE_D5,  16, NOTE_C5,  8,   NOTE_G4,  8,
    NOTE_C5,  8,  NOTE_G5,  8,  NOTE_D5,  -4, NOTE_C5,  8,   NOTE_C5,  1,

    REST,     4, // 68
    NOTE_DS4, 8,  NOTE_C4,  -4, NOTE_DS4, 2,  NOTE_D6,  2,   NOTE_B3,  2,
    NOTE_DS4, 8,  NOTE_C4,  -4, NOTE_G3,  2,  NOTE_D6,  2,   NOTE_B3,  2,
    NOTE_DS4, 8,  NOTE_C4,  -4, NOTE_G4,  2,  NOTE_FS4, 2,   NOTE_D4,  2,
    NOTE_F4,  2,  NOTE_D4,  2,  NOTE_D4,  2,  NOTE_G4,  2,

    NOTE_G4,  1, // 77 these shold be tied together :(
    NOTE_G4,  1,  NOTE_G4,  1,  NOTE_G4,  1,  REST,     1,   REST,     1,
    NOTE_G4,  1,  NOTE_G4,  1,  NOTE_DS4, 2,  NOTE_G4,  2, // repeat from here
    NOTE_G4,  2,  NOTE_C4,  4,  NOTE_D4,  8,  NOTE_DS4, 8,

    NOTE_F4,  2,  NOTE_AS4, 2, // 87
    NOTE_AS4, 2,  NOTE_C4,  4,  NOTE_D4,  8,  NOTE_DS4, 8,   NOTE_DS4, 2,
    NOTE_G4,  -2, NOTE_F4,  2,  NOTE_G4,  8,  NOTE_F4,  8,   NOTE_G4,  -2,
    NOTE_D4,  -1, NOTE_C4,  2,  NOTE_G4,  -2, NOTE_F4,  2,   NOTE_D4,  8,
    NOTE_DS4, 8,  NOTE_F4,  2,  NOTE_AS3, 2,

    NOTE_AS4, 2,  NOTE_C4,  4,  NOTE_D4,  8,  NOTE_DS4, 8,   NOTE_DS4, 2,
    NOTE_AS4, -2, NOTE_GS4, 2,  NOTE_G4,  8,  NOTE_F4,  8,   NOTE_F4,  8,
    NOTE_G4,  -1,

    NOTE_DS4, 2,  NOTE_G4,  2, // repeat from here
    NOTE_G4,  2,  NOTE_C4,  4,  NOTE_D4,  8,  NOTE_DS4, 8,

    NOTE_F4,  2,  NOTE_AS4, 2, // 87
    NOTE_AS4, 2,  NOTE_C4,  4,  NOTE_D4,  8,  NOTE_DS4, 8,   NOTE_DS4, 2,
    NOTE_G4,  -2, NOTE_F4,  2,  NOTE_G4,  8,  NOTE_F4,  8,   NOTE_G4,  -2,
    NOTE_D4,  -1, NOTE_C4,  2,  NOTE_G4,  -2, NOTE_F4,  2,   NOTE_D4,  8,
    NOTE_DS4, 8,  NOTE_F4,  2,  NOTE_AS3, 2,

    NOTE_AS4, 2,  NOTE_C4,  4,  NOTE_D4,  8,  NOTE_DS4, 8,   NOTE_DS4, 2,
    NOTE_AS4, -2, NOTE_GS4, 2,  NOTE_G4,  8,  NOTE_F4,  8,   NOTE_F4,  8,
    NOTE_G4,  -1,
};
int LAYTON_TEMPO = 140;
int LAYTON_NB_NOTES = sizeof(LAYTON_MELODY) / sizeof(LAYTON_MELODY[0]) / 2;
