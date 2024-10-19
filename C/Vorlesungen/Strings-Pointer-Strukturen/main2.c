/*
1. Das Programm fragt vom Benutzer folgende Attribute ab: Vorname, Nachname, Strasse, Ort,
Postleitzahl. Diese Attribute werden in einer Struktur (struct) abgelegt. Die Abfrage wird beliebig oft wiederholt, bis der nutzer
durch die eingabe von("q") abbricht.

2.Nach jeder Eingabe, kann der Benutzer entweder das Programm abbrechen ("q"), eine weitere Adresse eingeben oder sich eine
Adresse der Wahl (Index) ausgeben lassen.

3. Der Benutzer kann nnach einem Attribut seiner Wahl nach dem entsprechendenn Eintrag suchen und bekommt diesen villständig ausgegeben.

4. Die Einträge werden per Menü in einer Datei gespeichert ("S") bzw. ausgelesen ("L").

---Struktur deklarieren----
struct Adresse_s
{
char Vorname[30];
char Nachname[30];
int plz;
char ort[50];
char strasse[50];
};

Struktur erzeugen:                struct Adresse_s Adressbuch[100];
Auf einzelne Attribute zugreifen: Adressbuch [0].plz=12345;

---String einlesen---
Syntax: fgets(char *string, int anzahl_zeichen, FILE *stream)
Beispiel: fgets(text,100,stdin); //text ist char text[100]
*/

#include <stdio.h>
#include <string.h>
int main(){
char vorname;
char nachname;
int plz;
char ort;
char strasse;
}

void abfrage(char *vorname, char *nachname, int plz){
    printf("Bitte gebe einen Vornamen ein: ");
    scanf("%c", vorname);
    fflush(stdin);

    printf("Bitte gebe einen Nachnamen ein: ");
    scanf("%c", nachname);
    fflush(stdin);
    
    printf("Bitte gebe eine Postleitzahl ein: ");
    scanf("%d", &plz);
    fflush(stdin);


}