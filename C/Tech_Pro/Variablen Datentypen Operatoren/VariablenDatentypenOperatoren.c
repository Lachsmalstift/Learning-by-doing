#include <stdio.h>
//definition einer globalen Variable
static int int_global; //static ist hierbei optional und dient dazu, dass die Variable zur Compile-Zeit angelegt
static int int1 = 42; //lokale Variable überdeckt globale Variable
int main()
{
//Bevor eine Variable nutzbar ist, muss sie definiert/deklariert werden
//Definition einer Lokalen Variable ohne Initialisierung
//eigener Anweisungsblock definiert durch { } - eingeschlossener Sichtbarkeitsbereich
{
int int1;
printf("lokales int1: %i \n", int1);
printf("Adresse lokales int1: %p \n", &int1);
}

//welchen Wert hat int1?
printf("globales int1: %i \n", int1);
printf("int_global: %i \n", int_global);
//Adressen der Variablen: Operator & <-- Adressoperator / Gibt die Adresse von X
printf("Adresse globales int1: %p \n", &int1);
printf("Adresse int_global: %p \n", &int_global);

//Andere Datentypen
    float float1 = 29926485.05;
    double double1 = 29926485.05;
    printf("float1: %f \n", float1);
    printf("double1: %f \n", double1);
    char char1 = 'A';
    printf("char1: %c \n", char1);
    //intern werden variablen vom Typ char numerisch abgebildet
    //Numerische Operatoren daher möglich
    char1 = char1 + 1;
    printf("char1 addiert: %c \n", char1);
    printf("Ordnungszahl char1 addiert: %i \n", char1);

//Operatoren
        //Arithmetische Operatoren + - * / %
        //Vorsicht bei Integern und Division 
        double1 = 5.0/3;
        //Die Zuweisung verwandelt das Ergebenis in das Datenformat eines double - impliziter TypeCast
        printf("5/3= %f \n", double1);
        //Relationale Operatoren: > < >= <= == !=
        //Wahrheitswerte werden numerisch abgebildet: 0 = falsch und !0 = true
        int ro = 5>3;
        printf("Wahr oder Falsch: %i \n", ro);
        //logische Operatoren verbinden Wahrheitswerte
        ro = (5>3) && (5>6);
        printf("Wahr oder Falsch: %i \n", ro);
        ro = (5>3) || (int1 = 1);
        printf("Wahr oder Falsch: %i \n", ro);
        //expliziter TypeCast
        double1 = (double) int1/10;
        printf("double1: %f\n", double1);
    return 0;
}