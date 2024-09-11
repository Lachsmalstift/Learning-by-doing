#include <stdio.h>

int main() {
    int eingabe1;
    int eingabe3;
    int ergebnis1;
    char eingabe2;

    printf("Gib die erste Zahl ein: ");
    scanf("%d", &eingabe1);

    fflush(stdin);

    printf("Gib einen Operator ein: ");
    scanf("%c", &eingabe2);

    fflush(stdin);

    printf("Gib die zweite Zahl ein: ");
    scanf("%d", &eingabe3);

    switch(eingabe2) {
        case '+':
            ergebnis1 = eingabe1 + eingabe3;
            printf("%d\n", ergebnis1);
            break;
        case '-':
            ergebnis1 = eingabe1 - eingabe3;
            printf("%d\n", ergebnis1); 
            break;
        case '*':
            ergebnis1 = eingabe1 * eingabe3;
            printf("%d\n", ergebnis1);
            break;
        case '/':
            if (eingabe3 != 0) {
                ergebnis1 = eingabe1 / eingabe3;
                printf("%d\n", ergebnis1); 
            } else {
                printf("Fehler: Division durch Null\n");
            }
            break;
        default:
            printf("Ungültiger Operator\n");
            break;
    }

    return 0;
}
