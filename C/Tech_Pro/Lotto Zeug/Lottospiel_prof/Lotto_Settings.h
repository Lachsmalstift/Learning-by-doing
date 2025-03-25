#ifndef _LOTTO_SETTINGS_H_
#define _LOTTO_SETTINGS_H_

struct Lottospiel_Settings_s {
    int seed;
};
typedef struct Lottospiel_Settings_s Settings_t;
// Deklaration von Datenstrukturen
Settings_t* init_settings();

#endif
