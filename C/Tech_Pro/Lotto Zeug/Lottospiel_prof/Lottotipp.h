#ifndef _LOTTOTIPP_H_
#define _LOTTOTIPP_H_
// Datenstruktur Lottotipp
struct Lottotipp_s {
    // array fuer die Lottozahlen
    int *Lottozahlen;
    int Superzahl;
};
// typedef alias
typedef struct Lottotipp_s Lottotipp_t;
// schnitstellenfunktionen für den Datentyp Lottotipp_t
// Funktion, die eine neue Instanz vom Typ Lottotipp_t erzeugt -> Konstruktor
Lottotipp_t* new_Lottotipp();
// Schnittstellenfunktion fuer die Lottoziehung
Lottotipp_t* ziehe_Lottozahlen();
void print_Lottotipp(Lottotipp_t*);
// Hilfsfunktionen
int is_multiple(int,int,Lottotipp_t*);

#endif // _LOTTOTIPP_H_
