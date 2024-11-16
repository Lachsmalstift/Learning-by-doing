#include <stdio.h>
int main()
{
    float kontostand = 200.5;
    //** %f zeigt um welchen Datentyp es sich handelt, danach kommt die Variable. \n = Zeilenumbruch */
    printf("Mein Kontostand: %f\n", kontostand);

    float Kurs = 5.25;
    float Ebay_Verkauf = 7.0;
    int einzahlung = 100;
    int abheben = 30;
    float wunsch;

    //* Um den Kontostand zu aktualisieren, muss ich erst beschreiben, was darauf passieren soll.  */
    kontostand = kontostand - Kurs;
    printf("Mein Kontostand nach Kurs kauf: %f\n", kontostand);

    kontostand = kontostand + Ebay_Verkauf;
    printf("Mein Kontostand nach Ebay Verkauf: %f\n", kontostand);

    kontostand = kontostand + 50;
    printf("Mein Kontostand plus 50€: %f\n", kontostand);
    
    kontostand = kontostand + einzahlung;
    printf("Mein Kontostand nach der 100€ Einzahlung: %f\n", kontostand);

    kontostand = kontostand - abheben;
    printf("Mein Kontostand nachdem ich 30€ abgehoben habe : %f\n", kontostand);

    kontostand = kontostand * 0.98;
    printf("Mein Kontostand nach 2 Prozent Gebühr: %f\n", kontostand);

    printf("Gebe deinen Wunschkontostand ein: \n");
    scanf("%f", &wunsch);

    kontostand = kontostand + wunsch;
    printf("Mein Kontostand nach meine Wnsch: %f\n", kontostand);


    return 0;
}

