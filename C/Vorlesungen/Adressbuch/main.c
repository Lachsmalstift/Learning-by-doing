/*Übung Adressbuch:
    (1)
    - Das Programm fragt vom Benutzer die folgenden Attribute ab:
        - Vorname (ggf. Doppelname), Nachname, Strasse, Ort, Postleitzahl
    - Diese Attribute werden in einer Struktur (struct) abgelegt.
    - Die Abfrage wird beliebig oft wiederholt, bis der Benutzer diese durch Eingabe
      von "q" abbricht.
    (2)
    - Nach jeder Eingabe, kann der Benutzer entweder das Programm abbrechen ("q"), 
      eine weitere Adresse eingeben oder sich eine Adresse der Wahl (Index) 
      ausgeben lassen.
    (3)
    - Der Benutzer kann nach einem Attribut seiner Wahl nach dem entsprechenden
      Eintrag suchen und bekommt diesen vollständig ausgegeben.
    (4)
    - Die Einträge werden per Menü in einer Datei gespeichert ("s") bzw.
      ausgelesen ("l").

    --- Struktur deklarieren ---
    struct Adresse_s
    {
        char vorname[30];
        char nachname[30];
        int plz;
        char ort[50];
        char strasse[50];
    };
    
    Struktur erzeugen: 					struct Adresse_s Adressbuch[100];
    Auf einzelne Attribute zugreifen: 	Adressbuch[0].plz=12345; 

	--- String einlesen ---
	Syntax: 	fgets(char *string,int anzahl_zeichen,FILE *stream)
	Beispiel: 	fgets(text,100,stdin); 	//text ist char text[100]*/

#include <stdio.h>
#include <string.h>
struct Adresse_s
    {
        char vorname[30];
        char nachname[30];
        char plz[5];
        char ort[50];
        char strasse[50];
    
    };
int main() {
    struct Adresse_s Adressbuch[100];
    // Eingabe
    while(1)
    {
    char eingabe[2];
    printf("Vorname: ");
    fgets(Adressbuch[0].vorname, 30, stdin);
    printf("Nachname: ");
    fgets(Adressbuch[0].nachname, 15, stdin);
    printf("Strasse: ");
    fgets(Adressbuch[0].strasse, 50, stdin);
    printf("Ort: ");
    fgets(Adressbuch[0].ort, 50, stdin);
    printf("PLZ: ");
    fgets(Adressbuch[0].plz, 5, stdin);
printf("Druecke q um die Eingabe abzubrechen oder Enter um zu wiederholen.\n");
fflush(stdin);

fgets(eingabe, 2, stdin);

if (eingabe[0] == 'q') 
{
    break;
}
    }
    //Ausgabe
    printf("Vorname: %s", Adressbuch[0].vorname);
    printf("Nachname: %s", Adressbuch[0].nachname);
    printf("Strasse: %s", Adressbuch[0].strasse);
    printf("Ort: %s", Adressbuch[0].ort);
    printf("PLZ: %s", Adressbuch[0].plz);
    return 0;
}