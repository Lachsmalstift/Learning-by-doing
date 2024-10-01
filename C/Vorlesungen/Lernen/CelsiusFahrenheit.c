/* Celsius * 1,8 + 32*/
#include <stdio.h>
int main ()

{
int Celsius = 0;
float Fahrenheit = 0;

while(Celsius <= 300)
{
    Fahrenheit = Celsius * 1.8 + 32;
    printf("%i Celsius sind %.2f Fahrenheit \n", Celsius, Fahrenheit);
    Celsius = Celsius +20;
}
return 0;
}
