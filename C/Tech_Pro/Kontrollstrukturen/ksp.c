/*ONENOTE VL3*/

/* Kontrollstrukturen in C*/
#include <stdio.h>

int main()
{
/*Strukturierte Programmierung kennt 3 Elemente
1.Sequenz - Lineare Abfolge von Anweisungen
2.Bedingte Ausführung - Selektion Auswahl von Programmzweigen
    2.1 zugehörige Kontrollstrukuren: if, switch
3.Itteration - Wiederholte Ausführung von Programmteilen (Schleifen)
    3.1: while, do while, for*/

int test = 0;
unsigned char my_char; //modifiziert zu rein positiven Werten
/*Bedingte Ausführung mittels if (Zweiweg Schalter)*/
if (test) /* entweder einzelne Anweisung ( ) oder ein Anweisungsblock { }, selbiges gilt für else Zweig*/
printf("Der if-Zweig wurde ausgefuehrt.\n");
else printf("Der else-Zweig wurde ausgefuehrt.\n");
    printf("Weiterer Programmablauf.\n");

/* Mehrweg - Schalter: Bedingte Ausführung mit mehreren Zweigen*/
switch(3*test+1) // Ausdruck - liefert einen Wert zurück
    {
        /* Sprungmarken - Labels, die möglichen Werten des Ausdrucks entsprechen.*/
        case 0: printf("Anweisung zum Label 0.\n");
            break; //Trennung der einzelnen Ausführungen
        case 1: printf("Anweisung zum Label 1.\n");
            break;
        default: printf("Anweisungen für alle anderen Werte (also die, die nicht durch Case vertreten sind.)\n");
    }

/*Interationen: Wiederholte Ausführung*/
//Ausgabe einer ASCII-Tabelle
my_char =  0;
//Umsetzung mittels While
/*while (my_char < 128) //Bedingung so lange wahr = ausführen
{
    printf("Ordnungszahl = %i \t Zeichen = %c\t", my_char, my_char);
    //inerhalb der Schleife muss dafür gesorgt werden, dass sich die Bedingung ändert - sonst ENDLOSSCHLEIF
    if ((my_char+1)%2 == 0) printf("\n");
    my_char++; //postinkrement
}*/

//for Schleife auch anschauen.

//Umsetzung mittels do - while
//Ist nachprüfende Schleifenkonstruktion
//Wird also mindestens ein mal ausgeführt.
do {
//printf("Schleifenrunpf wird mindestens einmal ausgefuehrt.\n");
printf("Ordnungszahl = %i \t Zeichen = %c\t", my_char, my_char);
    if ((my_char+1)%2 == 0) printf("\n");
    my_char++; //postinkrement
} while(my_char < 128);

return 0;
}