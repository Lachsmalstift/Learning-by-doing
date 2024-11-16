#include <stdio.h>
int main() 
{
    int alter;
    long long tage;
    long long stu;
    long long min;
    long long sec;

    printf("Hinweis: Schaltjahre sind nicht mit eingerechnet!\n");
    printf("Gebe dein Alter in Jahren ein: ");
    scanf("%i", &alter);

    tage = (long long)alter * 365;
    printf("Das sind %lld Tage\n", tage);

    stu = tage * 24;
    printf("%lld Stunden\n", stu);
    
    min = stu * 60;
    printf("%lld Minuten\n", min);

    sec = min * 60;
    printf("%lld Sekunden\n", sec);

    return 0;
}