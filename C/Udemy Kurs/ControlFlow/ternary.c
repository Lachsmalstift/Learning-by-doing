#include <stdio.h>
//Alternative zu if/else zur initialisierung einer Variable
int main() 
{
    int age1 = 27;
    int age2 = 26;
    // Der Ternary-Operator überprüft, ob die Bedingung wahr ist. 
    // Wenn die Bedingung wahr ist, wird der erste Ausdruck zurückgegeben, 
    // andernfalls wird der zweite Ausdruck zurückgegeben. 
    // Syntax: (Bedingung) ? Ausdruck1 : Ausdruck2;
    int older_age = age1 > age2 ? age1 : age2;
    printf("%i", older_age);
    return 0;
}