#include <stdio.h>

// Funktion zum Tauschen der Werte von zwei Variablen
void swap(int **p, int **q) 
{
    int temp = **p;  // Speichern des Werts, auf den p zeigt
    **p = **q;        // Wert von q wird zu p kopiert
    **q = temp;       // Der ursprüngliche Wert von p wird zu q kopiert
}

int main() 
{
    int a = 5;
    int b = 10;

    printf("Vor dem Tausch:\n");
    printf("Wert 1: %d\n", a);
    printf("Wert 2: %d\n", b);

    // Zeiger auf a und b übergeben
    int *p = &a;
    int *q = &b;

    // Funktionsaufruf: Werte tauschen
    swap(&p, &q);

    printf("Nach dem Tausch:\n");
    printf("Wert 1: %d\n", a);
    printf("Wert 2: %d\n", b);

    return 0;
}
