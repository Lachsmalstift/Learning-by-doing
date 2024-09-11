/* Beschreibung: Berechnung ob es sich um ein Schaltjahr handelt

Eingabe: Jahreszahl
Ausgabe: 'J' oder 'N', ob es ein Schaltjahr ist
Hinweise:
- Schaltjahr ist durch 4 Teilbar und nicht durch 100 teilbar
- Es ist aber ein schaltjahr wenn durch 400 teilbar 

Notwendig: Relationale und logische Operatoren + Ternären Operator*/



#include <stdio.h>
int main() {
    int eingabeZahl = 0;
    printf("Geben das Jahr ein: ");
    scanf("%i", &eingabeZahl);
    printf("\nIst das Jahr ein schaltjahr?: %c", (eingabeZahl%400 == 0) || (eingabeZahl%4 == 0) && (eingabeZahl%100!= 0)? 'J' : 'N');
    printf("\nDrücken Sie eine beliebige Taste, um das Programm zu beenden...");
    getchar();
    getchar();

    return 0;
}
