#include <stdio.h>
int main() 
{
    int eingabe = 0;
    printf("Gib deine Note ein: ");
    scanf("%i", &eingabe);

    switch(eingabe)
    {
    case 1:
    printf("Sehr gut!");
    break;

    case 2:
    printf("Gut!");
    break;

    case 3:
    printf("Befriedigend!");
    break;

    case 4:
    printf("ausreichend!");
    break;

    case 5:
    printf("mangelhaft!");
    break;

    case 6:
    printf("ungenuegend!");
    break;
    
    default:
    printf("keine gueltige Note!");
}
}