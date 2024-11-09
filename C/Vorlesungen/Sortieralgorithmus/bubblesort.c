/*
1.Fester Array
2.Bubble sort aufsteigend (Ausgabe)
3.Eingabe der Werte durch benutzer
4.Benutzer kann auf- und absteigend auswählen
5.Auslagern von Teilcode in Funktionen*/

#include <stdio.h>
int main(){

    int eingabe[5] = {6,5,8,-3,2};

for( int b = 0; b < 4; b++){
    for(int i=0; i<4 - b; i++){
        if(eingabe[i] >eingabe[i+1]){
            int temp = eingabe[i];
            eingabe[i] = eingabe[i+1];
            eingabe[i+1] = temp;
        }
    }
}
for(int i = 0; i < 5; i++){
    printf("%i ", eingabe[i]);
}
}

#include <stdio.h>
void Eingabe(int Eingabewerte[], int anzahlwerte);
void Ausgabe(int Ausgabewerte[], int anzahlwerte);


/*int main(){
    int anzahlwerte = 0;
    printf("Bitte Anzahl Werte eingeben: ");
    scanf("%i", &anzahlwerte);
    int Eingabewerte[anzahlwerte];
    Eingabe(Eingabewerte, anzahlwerte); //Name eines Arrays entspricht Speicheradresse von Arrayelement 0
    Ausgabe (Eingabewerte,)
    return 0;
}

void Eingabe(int Eingabewerte[], int anzahlwerte) {
for(int i = 0; i < anzahlwerte; i++);
printf("Bitte die %i. Zahl eingeben: ", i +1);
scanf("%i", &Eingabewerte[i]);
}
void Bubblesort(int Eingabewerte)
void Ausgabe (int Ausgabewerte[], int anzahlwerte) {
    printf(" ")


}
*/