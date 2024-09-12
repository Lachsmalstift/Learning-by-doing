#include <stdio.h>

int main() {
    int ergebnis;
    int zahl;
    char operator;
    char weiter = 'j';

    printf("Gib die erste Zahl ein: ");
    scanf("%d", &ergebnis);

    while (weiter == 'j'){

        fflush(stdin);

        printf("Gib einen Operator ein: ");
        scanf(" %c", &operator);

        fflush(stdin);

        printf("Gib die nächste Zahl ein: ");
        scanf("%d", &zahl);

        switch(operator) {
            case '+':
                ergebnis += zahl;
                break;
            case '-':
                ergebnis -= zahl;
                break;
            case '*':
                ergebnis *= zahl;
                break;
            case '/':
                if (zahl != 0) {
                    ergebnis /= zahl;
                } else {
                    printf("Fehler: Division durch Null\n");
                }
                break;
            default:
                printf("Ungültiger Operator\n");
                break;
        }

        printf("Zwischenergebnis: %d\n", ergebnis);

        printf("Möchtest du eine weitere Rechnung durchführen? (j = ja, q = quit): ");
        scanf(" %c", &weiter);

        if (weiter != 'j' && weiter != 'q') {
            printf("Ungültige Eingabe\n");
            weiter = 'j';
        }
    }

    printf("Endergebnis: %d\n", ergebnis);

    return 0;
}
