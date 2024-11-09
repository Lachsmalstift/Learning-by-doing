#include <stdio.h>
#include <string.h>

double berechnung(double,double,char);

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

zahl1 = berechnung(zahl1, zahl2, operator);
}
    return 0;
}
double berechnung(double z1, double z2, char op)
{
//Berechnung + Ausgabe
switch(op)
{
    case '+':
    {
        z1 = z1 + z2;
    
        break;
    }
    case '-':
    {
        z1 = z1 - z2;
    
        break;
    }
    case '*':
    {
        z1 = z1 * z2;
    
        break;
    }
    case '/':
    {
        z1 = z1 / z2;
    
        break;
    default:
    {
        printf("Falsche Eingabe: %c ist kein gueltiger Operator! \n", op);
        break;
    }
}
}
//Ausgabe
(printf("%lf\n", z1));
return z1;
}