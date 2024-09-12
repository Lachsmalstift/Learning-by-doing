/*Umwandlung einer Dezimalzahl  in Binör*/
//While-Iteration
/* While(Bedingung)
{ 
Anweisungsblock
}*/

/*Aufgabe: Eingabewert so lange durch zwei teilen, bis eingabewert 0 ist und Rest ausgegeben.*/
#include <stdio.h> 
int main() 
{  
    unsigned long int eingabewert;
    printf("Bitte gib eine Zahl ein: ");
    scanf("%lu", &eingabewert);

while(eingabewert > 0) 
{
    printf("%lu ", eingabewert%2);
    eingabewert = eingabewert/2;
}
printf("Die Zahl muss von rechts nach links gelesen werden.\n");
}