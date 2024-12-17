#include <stdio.h>

int main()
{
float input;
    printf("Bitte gebe eine Zahl zwischen 1 und 10 ein:\n");
    scanf("%f", &input);
do
{
    printf("Ungueltige Eingabe, versuche es bitte erneut:\n");
    scanf("%f", &input);
}

while(input > 10 || input < 1);
{
    printf("Danke, die Eingabe war Erfolgreich!");
}

return 0;
}


