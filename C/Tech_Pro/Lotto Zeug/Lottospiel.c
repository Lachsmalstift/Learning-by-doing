#include "Lottospiel.h"
#include <stdio.h>
#include <stdlib.h> //Für die Verwendung von malloc
#include <time.h>//für die Initialiserung von Srand
//Schnittstellenfunktionen für Settings
Settings_t* init_settings(){
    Settings_t* out = (Settings_t*) malloc(sizeof(Settings_t));
    time_t t;
    out->seed = &t;
    srand(out->seed);
}

//Schnittstellenfunktionen für den Datentyp Lottotipp
Lottotipp_t* new_Lottotipp(){
    //Dynamisch Speicher alloziert
    Lottotipp_t* out = malloc(sizeof(Lottotipp_t));
    out->Lottozahlen = malloc(ANZ_LOTTOZAHLEN*sizeof(int)); //alloiert Speicherplatz für ANZ_LOTTOZAHLEN an int
    out->Superzahl = 0; //irgendein sinvvoller Default-Wert
    return out;
}

//Ausgabe eines Lottotipps auf dem Bildschirm
void print_Lottotipp(Lottotipp_t* ptr_Tipp)
{   
    //Ausgabe der Lottozahlen
    int k;
    for(k = 0; k < ANZ_LOTTOZAHLEN; k++) printf("Lottozahlen[%i+1] = %i\n",k,*(ptr_Tipp->Lottozahlen+k));
    printf("Superzahl: %i\n",ptr_Tipp->Superzahl);
}

//Ziehung von Lottozahlen
Lottotipp_t* ziehe_Lottozahlen()
{
    Lottotipp_t* out = new_Lottotipp();
    int k;
    int dummy;
    for (k=0; k<ANZ_LOTTOZAHLEN; k++)
    {
        //erzeugen sinnvoller Lottozahlen
        dummy = neue_Lottozahl();
        //Prüfung auf doppelte Lottozahlen
        if(is_multiple(dummy,k,out)) k--; //zurückweisen der Zufallszahl
        else *(out->Lottozahlen) = dummy;
    }
    out->Superzahl = neue_Superzahl();
    return out;
}

int neue_Lottozahl()
{
    int out;
    //time_t t;
    //srand((int)&t); //initialiseren des Zufallsgenerators
    out = rand()%MAX_LOTTOZAHL +1;
    return out;
}

int neue_Superzahl()
{
    int out;
    //time_t t;
    //srand((int)&t); //initialiseren des Zufallsgenerators
    out = rand()%(MAX_SUPERZAHL+1);
    return out;
}

//Schnittstellenfunktionen für das Spiel
void run_Lottospiel(){}