#include "Lotto_utils.h"
#include <stdlib.h> // fuer die Verwendung von malloc

int neue_Lottozahl()
{
    int out;
    out = rand()%MAX_LOTTOZAHL +1;
    return out;
}

int neue_Superzahl()
{
    int out;
    out = rand()%(MAX_SUPERZAHL+1);
    return out;
}
