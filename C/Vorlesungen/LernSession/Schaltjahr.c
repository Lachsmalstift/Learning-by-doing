#include <stdio.h>
#include <string.h>
int main()
{
    int Jahr = 0;

    //Eingabe
    printf("Gib ein Jahr ein: ");
    scanf("%i", &Jahr);

    //Wenn das Jahr durch 3 teilbar ist
    
        printf("Jahr ist durch 3 teilbar? = %s \n",(Jahr%3 == 0)? "Ja":"Nein");

    //Berechnung
    if((Jahr%400 == 0) || ((Jahr%100 != 0) && (Jahr%4 == 0)))
    {
            printf("Deine Jahreszahl: %i ist ein Schaltjahr.", Jahr);
    }
    else 
        printf("Deine Jahreszahl: %i ist kein Schaltjahr.", Jahr);
return 0;
}



