/*Geforderte Funktionen des Programms:
	1. Prüfen ob es sich um ein gültiges Dreieck handelt
	2. Prüfen ob es sich eventuell um ein Rechtwinkliges Dreieck handelt.
	3. Ausgabe der Ergebnisse der Prüfungen
	4. Die Werte der Seitenlängen sollen interaktiv eingegeben
    5. Wiederholte Prüfungen sollen möglich sein*/

#include <stdio.h>

int main()
{
double wert1;
double wert2;
double wert3;
char ende;
int wdhlng = 1;


do {
//Werte abfragen
printf("Geben Sie den ersten Wert des Dreiecks in Centimeter ein: \n");
scanf("%lf", &wert1);

printf("Geben Sie den zweiten Wert des Dreiecks ein: \n");
scanf("%lf", &wert2);

printf("Geben Sie den dritten Wert des Dreiecks ein: \n");
scanf("%lf", &wert3);

//Welcher Wert ist der größte?
if (wert1 >= wert2 && wert1 >= wert3) {
    printf("Der erste Wert (%f) ist der größte.\n", wert1);
} else if (wert2 >= wert1 && wert2 >= wert3) {
    printf("Der zweite Wert (%f) ist der größte.\n", wert2);
} else {
    printf("Der dritte Wert (%f) ist der größte.\n", wert3);
}

//Gültigkeit des Dreiecks prüfen
if (wert1 > 0.0 && wert2 > 0.0 && wert3 > 0.0 )
{
    printf("Es ist ein gueltiges Dreieck.\n");
}
else {
    printf("Eingabe ungültig, bitte Werte überprüfen und Programm neustarten.\n");
}

//Rechter Winkel?
if ((wert1 * wert1 + wert2 * wert2 >= wert3 * wert3) || (wert2 * wert2 + wert3 * wert3 >= wert1 * wert1) || (wert3 * wert3 + wert1 * wert1 >= wert2 * wert2))
{
    printf("Das Dreieck ist Rechtwinklig.\n");
}
else {
    printf("Das Dreieck ist nicht Rechtwinklig.\n");
}

printf("Programm Beendet. Möchten Sie das Programm erneut ausführen? y/n\n");
scanf(" %c", &ende);

if(ende == 'n')
{
    break;
}
} while (wdhlng == 1);

return 0;
}