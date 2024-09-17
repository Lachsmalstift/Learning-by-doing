
#include <stdio.h>

int main() {

    //Variablen
    int anzahl;

    //Eingabe 
    printf("Wie viele Zahlen möchtest du eingeben? ");
    scanf("%i", &anzahl);

    //Eingabe der einzelnen Werte
    int array [anzahl];
    for(int a=0; a <anzahl; a++) {
        printf("Bitte gib Zahl %i ein; ", a+1);
        scanf("%i", &array [a]);
    }
    for(int a = anzahl-1; a >= 0 ; a--) {
    printf("Die Zahl %i lautet: %i", a+1, array[a]);
    }

    //Ausgabe der größten Zahl
    int maximalwert = array[0];
    for(int a = 0; a < anzahl; a++) {
    if(array[a] > maximalwert) maximalwert = array[a];
    }
    printf("\n\n Der groesste Wert betraegt: %i", maximalwert);
}