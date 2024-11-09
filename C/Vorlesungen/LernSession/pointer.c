#include <stdio.h>
int main()
{
int t = 12; //T hat 12 Hunde

int * f = &t; //f zeigt auf die Adresse von T

//int c = *f

printf("Wert des Int: %i \n", t);
printf("Adresse des Int: %p \n", f);
    return 0;
}