#include "Lotto_Settings.h"
#include <stdlib.h> // fuer die Verwendung von malloc
#include <time.h>   // fuer die Initialisierung in srand()

// Schnitstellenfunktionen für Settings
Settings_t* init_settings(){
    Settings_t* out = (Settings_t*) malloc(sizeof(Settings_t));
    time_t t;
    out->seed = &t;
    srand(out->seed);
    return out;
}


