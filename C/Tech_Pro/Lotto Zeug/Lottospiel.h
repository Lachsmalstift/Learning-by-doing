#ifndef _LOTTOSPIELH //Header Guards 
#define _LOTTOSPIELH
//Definieren Elementarer Spielparameter
#define ANZ_LOTTOZAHLEN 6
#define MAX_LOTTOZAHL 49
#define MAX_SUPERZAHL 9
struct Lottospiel_Settings_s{
    int seed;
};
typedef struct Lottospiel_Settings_s Settings_t;
Settings_t* init_settings();

//Deklaration von Datenstrukturen
struct Lottotipp_s  //Eigener Datentyp
{
    //Array für die Lottozahlen die abgegeben werden
    int *Lottozahlen;
    int Superzahl;
};


//typedef Alias 
typedef struct Lottotipp_s Lottotipp_t; 

//Schnittschtellenfunktion für den Datentyp Lottotipp_t 
//Funktion, die eine neue Instanz vom Datentyp Lottotipp_t erzeugt --> Konstruktor 
Lottotipp_t* new_Lottotipp();

//Schnittstellenfunktion für die Lottoziehung
Lottotipp_t* ziehe_Lottozahlen();
void print_Lottotipp(Lottotipp_t*);

//erzeugen einer zufälligen Lottozahl
int neue_Lottozahl();
int neue_Superzahl();

//Schnittstellenfunktion 
void run_Lottospiel();

#endif //_LOTTTOSPIELH