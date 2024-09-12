#include <stdio.h>
void Ausgabe(int ausgabewert){
    printf("Ausgabe: %i", ausgabewert);
}
int Berechnung(int Zahl1, int Zahl2) {
    return Zahl1 / Zahl2;
}
int main(void) {
int Zahl1 = 60;
int Zahl2 = 2;
int ergebnis;
ergebnis = Berechnung(Zahl1, Zahl2);
Ausgabe(ergebnis);

return 0;
}