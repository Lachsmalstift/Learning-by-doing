#include <stdio.h>
int main()
{
    int zahl1 = 0;
    int zahl2 = 0;

    printf("Gib eine Zahl ein: ");
    scanf("%i", &zahl1);

    printf("Gib eine zweite Zahl ein: ");
    scanf("%i", &zahl2);

if (zahl1 == zahl2) printf("Die Zahlen %i %i sind gleich", zahl1, zahl2);
if (zahl1 < zahl2) printf("Die %i ist kleiner als %i", zahl1, zahl2);
if (zahl1 > zahl2) printf("Die %i ist groesser als %i", zahl1, zahl2);

    return 0;
}