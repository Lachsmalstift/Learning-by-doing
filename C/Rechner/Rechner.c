/* Beschreibung Übungsaufgabe Berechnungsprogramm

Eingabe: Benutzer gibt zwei Fließkommawerte im C-Code vor.
Ausgabe: Programm gibt das Ergebnis der arithmetischen Operationen + - * / aus. */
#include <stdio.h>

int main()
{
    //Eingabewerte
    double num1 = 21.45; 
    double num2 = 89.7;

    //Ausgabe
    printf("Ergebnis der Addition: von %.2lf und %.2lf ergibt %.2lf\n", num1, num2, num1 + num2);	
    printf("Ergebnis der Subtraktion: %.2lf\n", num1-num2);
    printf("Ergebnis der Multiplikation: %.2lf\n", num1*num2);
    printf("Ergebnis der Division: %.2lf\n", num1/num2);

    return 0;
}
