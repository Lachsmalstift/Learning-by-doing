#include <stdio.h>
#include <string.h>
int main()
{
    double zahl1, zahl2;
    char operator;
//Eingabe 2 zahlen und Operator
printf("Gib deine erste Zahl ein: ");
scanf("%lf", &zahl1 );

while(1)
{
    double ergebnis;
    //Eingabe
    printf("Gib deinen Operator ein: ");
    scanf(" %c", &operator );

if(operator == 'q')
{
    //bricht aus der Schleife aus
    break;
}

    printf("Gib deine zweite Zahl ein: ");
    scanf("%lf", &zahl2);

//Berechnung + Ausgabe
switch(operator)
{
    case '+':
    {
        zahl1 = zahl1 + zahl2;
        printf("%lf\n", zahl1);
        break;
    }
    case '-':
    {
        zahl1 = zahl1 - zahl2;
        printf("%lf\n", zahl1);
        break;
    }
    case '*':
    {
        zahl1 = zahl1 * zahl2;
        printf("%lf\n", zahl1);
        break;
    }
    case '/':
    {
        zahl1 = zahl1 / zahl2;
        printf("lf\n", zahl1);
        break;
    default:
    {
        printf("Falsche Eingabe: %c ist kein gueltiger Operator! \n", operator);
        break;
    }
}
}
}
    return 0;
}