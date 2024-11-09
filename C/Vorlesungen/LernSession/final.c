#include <stdio.h>
struct Mensch
{
    int age;
    int weight;
    char name[20];
};
void gib_mensch_namen(struct Mensch *Adresse, int a)
{
Adresse->age = a;
}
int main()
{
    int alter = 6;
    struct Mensch Chris;

    gib_mensch_namen(&Chris, alter);

    printf("Chris Alter: %i", Chris.age);
    return 0;
}