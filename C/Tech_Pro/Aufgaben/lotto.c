//Lotto Spiel 6 aus 49 + Zusatzzahl mit 1,20€ pro Tippfeld
//Ein Spieler muss einen Spieleinsatz festlegen können CHECK!
//Spieler muss Lottotipp eingeben können CHECK! // Änderung: Es soll auch möglich sein, dass es autoamtisch ausgeführt wird.
//Es muss eine Lottoziehung stattfinden srand()
//Es muss eine Gewinnermittlung geben
/*Es soll mehrere verschiedene Spielmodi geben darunter:
    - Einzelspiel
    - Einen Lottotipp mehrfach spielen (Eine bestimmte Anzahl an Spielen / Bis das Guthaben aufgebraucht ist)
    -Mehrere Tipps, also mehrere Lottoscheine*/
//Optional: Das Spiel kann von mehreren Perspnen gleichzeitig gespielt werden
//Optional: Das Lottospiel kann über das "Netzwerk" untereinandeer gespielt werden kann. (gottlos)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Eingabe(int zahlenfolge[], int felder);
int superzahl;
int usersuperzahl;
void spielwert(float sw);
char szfrage;

//FALSCHE Gewinnausschüttungen :(
#define JACKPOT 11000000UL
double gewinnklasse1 = (0.15 * JACKPOT < 1000000UL) ? 1000000UL : 0.15 * JACKPOT;
double gewinnklasse2 = 0.15 * JACKPOT;
double gewinnklasse3 = 0.052 * JACKPOT;
double gewinnklasse4 = 0.155 * JACKPOT;
double gewinnklasse5 = 0.043 * JACKPOT;
double gewinnklasse6 = 0.102 * JACKPOT;
double gewinnklasse7 = 0.087 * JACKPOT;
double gewinnklasse8 = 0.411 * JACKPOT;
double gewinnklasse9 = 6.0;


float bank;
char guthaben;
char superzahlfrage;
int tippfelder;
int main()
{
    srand(time(0)); //Hier wird wohl ein random zahl anhand eines Time Codes
    superzahl = rand() % 10;
    printf("Willkommen bei Lotto 6 aus 49. Der heutige Jackpot ist %lu\nGewinnchance 1:140Mio\n", JACKPOT);
    printf("Ihr Guthaben in Euro betraegt %f\n", bank);
    float sw;
    int felder;
    printf("Moechten Sie Guthaben auf ihr Konto einzahlen? y/n\n");
    scanf("%c", &guthaben);
    switch(guthaben)
    {
        case 'y':
        printf("Wie viel möchten Sie in Euro einzahlen?\n");
        scanf("%f", &bank);
        printf("Sie haben %f eingezahlt\n", bank);
    break;
        case 'n':
        printf("Ok.\n");
    break;
        default:
        printf("Ungueltige Eingabe!\n");
    break;
    }
    printf("Wie viele Tippfelder moechten Sie eingeben? Minimum: 1 Maximum: 6: \n");
    scanf("%i", &felder);
    int *zahlenfolge = malloc(felder * sizeof(int));
    if (zahlenfolge == NULL) {
        printf("Fehler bei der Speicherzuweisung!\n");
        return 1;
    }
    Eingabe(zahlenfolge, felder);


//Abfrage zur füllung der Tippfelder automatisch oder selbst
printf("Moechten Sie die Lottozahlen selbst ausfuellen oder sollen diese automatisch ausgefuellt werden?\n1 = Selbst ausfuellen 2 = Automatisch ausfuellen\n");
char tippfelderzufrieden;
    switch(tippfelder)
    {
        case '1' : Eingabe;
        break;
        case '2' : printf("Die Zahlen werden automatisch ausgewaehlt.\n");
        //Funktion zur automatischen Auswahl von 6 nicht gleichen Zahlen einfügen
        printf("Passen die Zahlen so, oder moechten Sie neue?\n");
            switch(tippfelderzufrieden)
            {
                case 'n' : printf("Zahlen werden neu ausgewahlt.");
            }
    }

//Abfrage ob man mit Superzahl spielen will
printf("Möchten Sie eine Superzahl angeben? y/n: \n");
scanf(" %c", &szfrage);
    switch(szfrage)
    {
    case 'y':
        printf("Bitte geben Sie die Superzahl ein: \n");
        scanf("%i", &usersuperzahl);
        break;
    
    case 'n': 
        printf("Ok, keine Superzahl.");
        break;
    }
    return 0;
}
//Wiederholung der vom User festgelegten Superzahl
void ausgabesz(int usersuperzahl)
{
    printf("Superzahl: %i\n", usersuperzahl);
}

//Eingabe der Zahlen für die Tippfelder
void Eingabe(int zahlenfolge[], int felder){
    for(int i = 0; i < felder; i++){                         
        printf("Bitte den %i. Wert eingeben: ", i+1);
        scanf("%i", &zahlenfolge[i]);
        if(zahlenfolge[i]>0 && zahlenfolge[i]<50){       
            for(int j = 0; j < i; j++){                 
                if(zahlenfolge[i] == zahlenfolge[j]){
                    printf("Die Zahl %i existiert schon!\n", zahlenfolge[i]);
                    i--;
                    break;
                }
            }
        }
        else{
            printf("Unguelti!\n");
            i--;
        }
    }
}

//Funktion welche den Spielwert mit dem Guthaben verrechnet
void spielwert(float sw)
{

}


