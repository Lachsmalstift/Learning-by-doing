//Präprozessor Direktive
#include <stdio.h> //einfügen der Headerdatei

//function header / Funktionskopf
/* Function Header ist für den Compiler
1. Bekanntmachung einer Funktion mit einem Namen
2. Black Box "mit Anschlussbild"*/
int main()

//Definieren von labels mit dem Präprozessor (Name frei wählbar)
#define text "Grundlagen der technischen Programmierung."
#define modulname

//function body / Funktionsrumpf
//enthält den "Algorithmus"
{
//Funktion für Ausgabe: printf - print formatted
//Kommt aus <stdio.h>
    printf("Hello, World!\n");
    //Ausgabe Modulname
    #ifdef modulname //wird (line 12) modulname auskommentiert, ist alles innerhalb #ifdef und #endif ausser kraft
    printf(text);
    #endif //modulname
//Rückgabe des Funktionswerts
    return 0;
}