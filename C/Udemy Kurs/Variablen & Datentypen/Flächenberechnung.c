#include <stdio.h>
int main()

{
    float laenge;
    float breite;
    float qm;
    float umf;

    printf("Gebe die Laenge deines Rechtecks in Meter ein: ");
    scanf("%f", &laenge);
    

    printf("Gebe die Breite deines Rechtecks in Meter ein: ");
    scanf("%f", &breite);
    

qm = laenge * breite;
umf = 2 * laenge + 2 * breite;
    printf("Dieses Rechteck hat %f Quadratmeter und einen umfang von %f Metern. \nDruecke die Enter Taste zum beenden. ", qm, umf);

    getchar();
    getchar();
    return 0;
}