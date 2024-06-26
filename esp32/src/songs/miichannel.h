#pragma once
#include "pitches.h"

int MII_MELODY[] = {

    // Mii Channel theme
    // Score available at https://musescore.com/user/16403456/scores/4984153
    // Uploaded by Catalina Andrade

    NOTE_FS4, 8, REST, 8, NOTE_A4, 8, NOTE_CS5, 8, REST, 8, NOTE_A4, 8, REST, 8,
    NOTE_FS4, 8, // 1
    NOTE_D4, 8, NOTE_D4, 8, NOTE_D4, 8, REST, 8, REST, 4, REST, 8, NOTE_CS4, 8,
    NOTE_D4, 8, NOTE_FS4, 8, NOTE_A4, 8, NOTE_CS5, 8, REST, 8, NOTE_A4, 8, REST,
    8, NOTE_F4, 8, NOTE_E5, -4, NOTE_DS5, 8, NOTE_D5, 8, REST, 8, REST, 4,

    NOTE_GS4, 8, REST, 8, NOTE_CS5, 8, NOTE_FS4, 8, REST, 8, NOTE_CS5, 8, REST,
    8, NOTE_GS4, 8, // 5
    REST, 8, NOTE_CS5, 8, NOTE_G4, 8, NOTE_FS4, 8, REST, 8, NOTE_E4, 8, REST, 8,
    NOTE_E4, 8, NOTE_E4, 8, NOTE_E4, 8, REST, 8, REST, 4, NOTE_E4, 8, NOTE_E4,
    8, NOTE_E4, 8, REST, 8, REST, 4, NOTE_DS4, 8, NOTE_D4, 8,

    NOTE_CS4, 8, REST, 8, NOTE_A4, 8, NOTE_CS5, 8, REST, 8, NOTE_A4, 8, REST, 8,
    NOTE_FS4, 8, // 9
    NOTE_D4, 8, NOTE_D4, 8, NOTE_D4, 8, REST, 8, NOTE_E5, 8, NOTE_E5, 8,
    NOTE_E5, 8, REST, 8, REST, 8, NOTE_FS4, 8, NOTE_A4, 8, NOTE_CS5, 8, REST, 8,
    NOTE_A4, 8, REST, 8, NOTE_F4, 8, NOTE_E5, 2, NOTE_D5, 8, REST, 8, REST, 4,

    NOTE_B4, 8, NOTE_G4, 8, NOTE_D4, 8, NOTE_CS4, 4, NOTE_B4, 8, NOTE_G4, 8,
    NOTE_CS4, 8, // 13
    NOTE_A4, 8, NOTE_FS4, 8, NOTE_C4, 8, NOTE_B3, 4, NOTE_F4, 8, NOTE_D4, 8,
    NOTE_B3, 8, NOTE_E4, 8, NOTE_E4, 8, NOTE_E4, 8, REST, 4, REST, 4, NOTE_AS4,
    4, NOTE_CS5, 8, NOTE_D5, 8, NOTE_FS5, 8, NOTE_A5, 8, REST, 8, REST, 4,

    REST, 2, NOTE_A3, 4, NOTE_AS3, 4, // 17
    NOTE_A3, -4, NOTE_A3, 8, NOTE_A3, 2, REST, 4, NOTE_A3, 8, NOTE_AS3, 8,
    NOTE_A3, 8, NOTE_F4, 4, NOTE_C4, 8, NOTE_A3, -4, NOTE_A3, 8, NOTE_A3, 2,

    REST, 2, NOTE_B3, 4, NOTE_C4, 4, // 21
    NOTE_CS4, -4, NOTE_C4, 8, NOTE_CS4, 2, REST, 4, NOTE_CS4, 8, NOTE_C4, 8,
    NOTE_CS4, 8, NOTE_GS4, 4, NOTE_DS4, 8, NOTE_CS4, -4, NOTE_DS4, 8, NOTE_B3,
    1,

    NOTE_E4, 4, NOTE_E4, 4, NOTE_E4, 4, REST, 8, // 25

    // repeats 1-25

    NOTE_FS4, 8, REST, 8, NOTE_A4, 8, NOTE_CS5, 8, REST, 8, NOTE_A4, 8, REST, 8,
    NOTE_FS4, 8, // 1
    NOTE_D4, 8, NOTE_D4, 8, NOTE_D4, 8, REST, 8, REST, 4, REST, 8, NOTE_CS4, 8,
    NOTE_D4, 8, NOTE_FS4, 8, NOTE_A4, 8, NOTE_CS5, 8, REST, 8, NOTE_A4, 8, REST,
    8, NOTE_F4, 8, NOTE_E5, -4, NOTE_DS5, 8, NOTE_D5, 8, REST, 8, REST, 4,

    NOTE_GS4, 8, REST, 8, NOTE_CS5, 8, NOTE_FS4, 8, REST, 8, NOTE_CS5, 8, REST,
    8, NOTE_GS4, 8, // 5
    REST, 8, NOTE_CS5, 8, NOTE_G4, 8, NOTE_FS4, 8, REST, 8, NOTE_E4, 8, REST, 8,
    NOTE_E4, 8, NOTE_E4, 8, NOTE_E4, 8, REST, 8, REST, 4, NOTE_E4, 8, NOTE_E4,
    8, NOTE_E4, 8, REST, 8, REST, 4, NOTE_DS4, 8, NOTE_D4, 8,

    NOTE_CS4, 8, REST, 8, NOTE_A4, 8, NOTE_CS5, 8, REST, 8, NOTE_A4, 8, REST, 8,
    NOTE_FS4, 8, // 9
    NOTE_D4, 8, NOTE_D4, 8, NOTE_D4, 8, REST, 8, NOTE_E5, 8, NOTE_E5, 8,
    NOTE_E5, 8, REST, 8, REST, 8, NOTE_FS4, 8, NOTE_A4, 8, NOTE_CS5, 8, REST, 8,
    NOTE_A4, 8, REST, 8, NOTE_F4, 8, NOTE_E5, 2, NOTE_D5, 8, REST, 8, REST, 4,

    NOTE_B4, 8, NOTE_G4, 8, NOTE_D4, 8, NOTE_CS4, 4, NOTE_B4, 8, NOTE_G4, 8,
    NOTE_CS4, 8, // 13
    NOTE_A4, 8, NOTE_FS4, 8, NOTE_C4, 8, NOTE_B3, 4, NOTE_F4, 8, NOTE_D4, 8,
    NOTE_B3, 8, NOTE_E4, 8, NOTE_E4, 8, NOTE_E4, 8, REST, 4, REST, 4, NOTE_AS4,
    4, NOTE_CS5, 8, NOTE_D5, 8, NOTE_FS5, 8, NOTE_A5, 8, REST, 8, REST, 4,

    REST, 2, NOTE_A3, 4, NOTE_AS3, 4, // 17
    NOTE_A3, -4, NOTE_A3, 8, NOTE_A3, 2, REST, 4, NOTE_A3, 8, NOTE_AS3, 8,
    NOTE_A3, 8, NOTE_F4, 4, NOTE_C4, 8, NOTE_A3, -4, NOTE_A3, 8, NOTE_A3, 2,

    REST, 2, NOTE_B3, 4, NOTE_C4, 4, // 21
    NOTE_CS4, -4, NOTE_C4, 8, NOTE_CS4, 2, REST, 4, NOTE_CS4, 8, NOTE_C4, 8,
    NOTE_CS4, 8, NOTE_GS4, 4, NOTE_DS4, 8, NOTE_CS4, -4, NOTE_DS4, 8, NOTE_B3,
    1,

    NOTE_E4, 4, NOTE_E4, 4, NOTE_E4, 4, REST, 8, // 25

    // finishes with 26
    // NOTE_FS4,8, REST,8, NOTE_A4,8, NOTE_CS5,8, REST,8, NOTE_A4,8, REST,8,
    // NOTE_FS4,8
};
int MII_TEMPO = 114;
int MII_NB_NOTES = sizeof(MII_MELODY) / sizeof(MII_MELODY[0]) / 2;
