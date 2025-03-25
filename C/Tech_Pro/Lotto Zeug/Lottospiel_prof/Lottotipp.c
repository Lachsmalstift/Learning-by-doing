#include "Lottotipp.h"
#include <stdio.h>
#include <stdlib.h> // fuer die Verwendung von malloc

// Schnittstellenfunktionen für den Datentyp Lottotipp
Lottotipp_t* new_Lottotipp(){
    // Dynamisch Speicher alloziert
    Lottotipp_t* out = (Lottotipp_t*) malloc(sizeof(Lottotipp_t)); // expliziter Cast auf den Datentyp Lottotipp*
    out->Lottozahlen = (int*) malloc(ANZ_LOTTOZAHLEN*sizeof(int)); // alloziert Speicherplatz für ANZ_LOTTOZAHLEN an int's
    out->Superzahl = 0; // irgendein sinnvoller Default-Wert
    return out;
}

// Ausgabe eines Lottotipps auf dem Bildschirm
void print_Lottotipp(Lottotipp_t* ptr_Tipp)
{
    // Ausgabe der Lottozahlen
    int k;
    for(k=0; k < ANZ_LOTTOZAHLEN; k++) printf("Lottozahl[%i+1] = %i\n",k,*(ptr_Tipp->Lottozahlen+k));
    // Ausageb der Superzahl
    printf("Superzahl: %i\n",ptr_Tipp->Superzahl);
}

// Ziehung von Lottozahlen
Lottotipp_t* ziehe_Lottozahlen()
{
    Lottotipp_t* out = new_Lottotipp();
    int k;
    int dummy;
    for (k=0; k< ANZ_LOTTOZAHLEN;k++)
    {
        // erzeugen sinnvoller Lottozahlen
        dummy = neue_Lottozahl();
        // Prüfung auf doppelte Lottozahlen
        if (is_multiple(dummy,k,out)) k--; // zurückweisen der Zufallszahl
        else *(out->Lottozahlen+k) = dummy;
    }
    out->Superzahl = neue_Superzahl();
    return out;
}

// Hilfsfunktionen
int is_multiple(int number,int k,Lottotipp_t* ptr_tipp)
{
    // toDo: Algorithmus implementieren
    return 0;
}

