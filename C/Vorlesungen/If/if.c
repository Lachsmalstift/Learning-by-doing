/*Benutzer gibt drei Zahlen ein, die größte Zahl wird ausgegeben.*/
#include <stdio.h>
int main() 
{
    int groesste = 0;
    int eingabe1;
    int eingabe2;
    int eingabe3;
    int eingabe4;
    printf("Geben Sie die erste Zahl ein: ");
    scanf("%i", &eingabe1);
    printf("Geben Sie die zweite Zahl ein: ");
    scanf("%i", &eingabe2);
    printf("Geben Sie die dritte Zahl ein: ");
    scanf("%i", &eingabe3);

    if(eingabe1>groesste){groesste = eingabe1;}
    if(eingabe2>groesste){groesste = eingabe2;}
    if(eingabe3>groesste){groesste = eingabe3;}
    printf("Die groesste Zahl ist: %i", groesste);

scanf("%i", &eingabe4);
return 0;
}