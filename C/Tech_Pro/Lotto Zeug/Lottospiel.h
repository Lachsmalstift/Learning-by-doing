#ifndef _LOTTOSPIELH //Header Gurads 
#define _LOTTOSPIELH

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
new_Lottotipp(Lottotip_t);



//Schnittstellenfunktion 
void run_Lottospiel();

#endif //_LOTTTOSPIELH