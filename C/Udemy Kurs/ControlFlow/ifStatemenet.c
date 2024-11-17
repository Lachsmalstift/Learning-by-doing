#include <stdbool.h>
#include <stdio.h>
int main()
{
    int age_a;
    int age_b;
    int age_c;

printf("Enter the age of the first person: ");
scanf("%i", &age_a);

printf("Enter the age of the second person: ");
scanf("%i", &age_b);

printf("Enter the age of the third person: ");
scanf("%i", &age_c);

bool ay = (age_a < age_b) && (age_a < age_c);
bool by = (age_b < age_a) && (age_b < age_c);
bool cy = (age_c < age_a) && (age_c < age_b);

//!Das if kann (und darf) nur ein mal verwendet werden
    if(ay)
    {
        printf("A is younger than B & C.\n");
    }
//!else if hingegen beliebig oft
    else if(by)
    {
    printf("B is younger than A and C.");
    }
    else if (cy)
    {
    printf("C is younger than A and B.");
    }
//!else kann, muss aber nicht höchsten 1x verwendet werden
    else
    {
    printf("Tey are the same age.");
    }

getchar();
	return 0;
}