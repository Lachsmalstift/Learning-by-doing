#include <stdio.h>

int main() {
int zahl;
int zahl1;
int zahl2;
int ergebnis;
/*printf("Geben Sie eine Zahl ein: ");
scanf("%i", &zahl);*/
for(zahl1 =1; zahl1 <=10; zahl1 = zahl1 + 1) 
{
    for(zahl2 = 1; zahl2 <= 10; zahl2 = zahl2 + 1)

    {ergebnis = zahl1 * zahl2;
    printf("%5.i", ergebnis);}
    printf("\n");
}
    return 0;
}