#include <stdio.h>

int main() {
    float sl;
    float u;
    float a;

    do {
        printf("Bitte gebe die Seitenlaenge des Quadrates ein (positive Zahl):\n");
        scanf("%f", &sl);

        if (sl <= 0) {
            printf("Die Eingabe war ungueltig. Bitte versuche es erneut.\n");
        }
    } while (sl <= 0);  // Schleife läuft weiter, bis eine gültige Eingabe erfolgt.

    u = sl * 4;
    printf("Der Umfang ist: %f\n", u);

    a = sl * sl;
    printf("Die Flaeche ist: %f\n", a);

    return 0;
}
