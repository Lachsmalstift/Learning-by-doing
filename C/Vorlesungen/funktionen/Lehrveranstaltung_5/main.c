#include <stdio.h>

double potenzieren(float basis, unsigned int exponent);

void Ausgabe(float basis, unsigned int exponent, double ergebnis){
    printf("\n\nDas Ergebnis der Berechnung von %.2f hoch %u ergibt %.2lf!\n\n", basis, exponent, ergebnis);
}

int main() {
    // Variablen
    float b;
    unsigned int e;
    double ergebnis;

    // Eingabe
    printf("Bitte eine Basis als Kommazahl eingeben: ");
    scanf("%f", &b);
    printf("Bitte einen Exponenten als positive ganze Zahl eingeben: ");
    scanf("%u", &e);

    // Berechnung
    ergebnis = potenzieren(b, e);

    // Ausgabe
    Ausgabe(b, e, ergebnis);

    return 0;
}

double potenzieren(float basis, unsigned int exponent) {
    double ergebnis = 1;
    for (unsigned int i = 1; i <= exponent; i++) {
        ergebnis *= basis;
    }
    return ergebnis;
}