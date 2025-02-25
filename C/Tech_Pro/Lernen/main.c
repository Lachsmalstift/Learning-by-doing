/*Geburtstagskalender - Herausfinden wann jemand Geburtstag hat.*/
#include <stdio.h>
struct persodaten
{
    char blutgruppe;
    int alter;
    int geburtsjahr;
    float koerpermasse[3];
    char name[50];
};

//Funktionen
void eingabe(struct persodaten *pers1);
void ausgabe(struct persodaten *pers1);
float bmi(struct persodaten *pers1);

int main()
{
struct persodaten pers1;
//Eingabe der Daten
eingabe(&pers1);
//BMI
pers1.koerpermasse[2] =
bmi(&pers1);
//Ausgabe der Daten
ausgabe(&pers1);

    return 0;
}

//User um Dateneingabe bitten.
//Benötigte Daten: Blutgruppe, Name, Alter, Geburtsjahr, Körpermaße
void eingabe(struct persodaten *pers1)
{
printf("Bitte gib deine Blutgruppe ein: ");
scanf("%c", &pers1 -> blutgruppe);

printf("Bitte gib dein Alter ein: ");
scanf("%i", &pers1 -> alter);

printf("Bitte gib dein Geburtsjahr ein: ");
scanf("%i", &pers1 -> geburtsjahr);

printf("Bitte gib deine Koerpergroesse in Metern ein: ");
scanf("%f", &pers1 -> koerpermasse[0]);

printf("Bitte gib dein Geicht in Kilogramm ein: ");
scanf("%f", &pers1 -> koerpermasse[1]);
}

//Ausgabe der Daten
void ausgabe(struct persodaten *pers1)
{
int option;
    while (option != 5)
{
printf("Waehle eine Ausgabe mit 1, 2, 3 oder 4:\n 1.Blutgruppe\n 2.Alter\n 3.Geburtsjahr\n 4.Koerpermasse\n 5.Beenden\n");
scanf("%i", &option);
    switch(option)
    {
        case 1: printf("Deine Blutgruppe ist: %c \n", pers1 -> blutgruppe);
    break;
        case 2: printf("Dein Alter ist: %i \n", pers1 -> alter);
    break;
        case 3: printf("Dein Geburtsjahr ist: %i \n", pers1 -> geburtsjahr);
    break;
        case 4: 
        for(int i = 0; i <= 2; i++) 
        {
        printf("Deine Koerprermasse betragen: %.2f \n", pers1 -> koerpermasse[i]);
        }
    break;
        case 5: printf("Programm wird beendet.");
    break;
        default: printf("Deine Eingabe war ungültig.");
    }
}
}
//BMI berechnen
float bmi (struct persodaten *pers1)
{
    float ergebnis = pers1 -> koerpermasse[1] / (pers1 -> koerpermasse[0] * pers1 -> koerpermasse[0]);
    return ergebnis;
}

