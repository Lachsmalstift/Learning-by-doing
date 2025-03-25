#include <stdio.h>
#include "math_operation.h"

int main()
{
    int a, b;
    printf("Gebe zwei Zahlen ein. Du bekommst die Summe und das Produkt zurueck.\n");
    scanf("%i %i", &a, &b);

    int summe = berechnung_summe(a, b);
    int produkt = berechnung_produkt(a, b);

    printf("Deine Summe ist: %i\n", summe);
    printf("Dein Produkt ist: %i\n", produkt);

printf("Das wars!");
scanf("%c");
    return 0;
}
