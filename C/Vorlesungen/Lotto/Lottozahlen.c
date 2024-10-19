/*
    Lottoprogramm
    - Der Nutzer kann 6 unterschiedliche Zahlen eingeben mit dem
    Wertebereich von 1 bis 49
    - Das Programm zieht 6 unterschiedliche Zahlen aus dem Bereich 1 bis 49
    - Das Programm ermittelt die Anzahl an Treffern (Gleiche Werte von
    Programm und Nutzer unabh�ngig von der Reihenfolge.)
    - Minimalanforderung: Eingabe/Ausgabe/Ermitteln einer Zufallszahl und
    Vergleich aller Zahlen in eigene Funktion auslagern. Mehr m�glich.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Eingabe(int zahlenfolge[]);
void Ausgabe(int zahlenfolge[]);
void Lottozahlengenerator(int Zufallswerte[]);
int  Vergleich(int Eingabewerte[], int Zufallswerte[]);

int main()
{
    int Eingabewerte[6] = {0};
    int Zufallswerte[6] = {0};

    Eingabe(Eingabewerte);
    Ausgabe(Eingabewerte);

    Lottozahlengenerator(Zufallswerte);
    Ausgabe(Zufallswerte);

    int AnzahlGleicher = Vergleich(Eingabewerte, Zufallswerte);
    printf("\n\nEs gab %i Treffer!", AnzahlGleicher);
    return 0;
}

//Zur Eingabe von sechs unterschiedlichen Werten zwischen 1 und 49 auffordern.
void Eingabe(int zahlenfolge[]){
    for(int i = 0; i < 6; i++){                         //Sechs Werte einlesen
        printf("Bitte den %i. Wert eingeben: ", i+1);
        scanf("%i", &zahlenfolge[i]);
        if(zahlenfolge[i]>0 && zahlenfolge[i]<50){       //Pr�fen, ob g�ltiger Wertebereich
            for(int j = 0; j < i; j++){                 //Pr�fen, ob Zahl schon existiert
                if(zahlenfolge[i] == zahlenfolge[j]){
                    printf("Die Zahl %i existiert schon!\n", zahlenfolge[i]);
                    i--;
                    break;
                }
            }
        }
        else{
            printf("Ungueltiger Wertebereich!\n");
            i--;
        }
    }
}

void Ausgabe(int zahlenfolge[]){
    printf("\n--- AUSGABE ---\n");
    for(int i = 0; i < 6; i++){
        printf("%i. Wert: %i\n", i+1, zahlenfolge[i]);
    }
}

void Lottozahlengenerator(int Zufallswerte[]){
    srand(time(0));
    for(int i = 0; i < 6; i++){
        Zufallswerte[i] = (rand()%49)+1;
        for(int j = 0; j < i; j++){                 //Pr�fen, ob Zahl schon existiert
            if(Zufallswerte[i] == Zufallswerte[j]){
                i--;
                break;
            }
        }
    }
}

int Vergleich(int Eingabewerte[], int Zufallswerte[]){
    int counter = 0;
    for(int i = 0; i < 36; i++){
        if(Eingabewerte[i%6] == Zufallswerte[i/6]) counter++;
    }
    return counter;
}
