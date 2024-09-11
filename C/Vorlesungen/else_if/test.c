#include <stdio.h>
int main() {
    int num1;
    printf("Gib bitte eine Zahl ein: ");
    scanf("%d", &num1);
    if (num1 > 4)
    {
        printf("Die Zahl ist groesser als 4.\n");
    }
    else if (num1 < 4)
    {
    printf("Die Zahl ist kleiner als 4.\n");
    }
    else {
        printf("Die Zahl ist gleich 4.\n");
    }
    return 0;
}

