#include <stdio.h>

void eingeben(int *wert1, int *wert2) {
    printf("Geben Sie die erste Zahl ein: ");
    scanf("%i", wert1);
    printf("Geben Sie die zweite Zahl ein: ");
    scanf("%i", wert2);
}

void tauschen(int *wert1, int *wert2) {
    int tausch = *wert1;
    *wert1 = *wert2;
    *wert2 = tausch;
}

void ausgeben(int wert1, int wert2) {
    printf("Zahl 1: %i, Zahl 2: %i\n", wert1, wert2);
}

int main() {
    int Zahl1, Zahl2;

    // Eingabe
    eingeben(&Zahl1, &Zahl2);

    // Ausgabe vor dem Tauschen
    ausgeben(Zahl1, Zahl2);

    // Tauschen
    tauschen(&Zahl1, &Zahl2);

    // Ausgabe nach dem Tauschen
    ausgeben(Zahl1, Zahl2);

    return 0;
}
