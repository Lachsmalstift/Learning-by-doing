#include <stdio.h>
int main ()
{
    int zaehler = 0;
    int summe = 0;

    do { 
        summe = zaehler + summe;
        zaehler ++;
    }

    while (zaehler <= 100);

printf("Die Zahlen von 1 bis 100 sind %i", summe);

return 0;
}