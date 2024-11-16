#include <stdio.h>

int main() {
    
    float float_eingabe;
    printf("Gebe einen float ein: ");

    // & = der zeiger dafür, worauf geschrieben werden soll
    scanf("%f", &float_eingabe);
    printf("Deine Eingabe: %f\n", float_eingabe);

    return 0;
}