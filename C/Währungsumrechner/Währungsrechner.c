/* Währungskurs:
- 1€ = 1.22 USD
- 1€ = 0.00031 BTC*/
#include <stdio.h>
int main()   
{
    //Eingabewerte
    double euro = 21;
    double umrUSD = 1.22;
    double umrBTC = 0.00031;

    //Ausgabe
    printf("Das sind %.21lf USD bzw %.21lf in BTC", euro * umrUSD, euro * umrBTC);
    
    return 0;  // Programmende
}