#include "Lottospiel.c"
#include <stdio.h> 

int main()
{
    int i;
    Settings_t* settings = init_settings();
    //Test print Lottotipp
    Lottotipp_t* mein_Tipp = new_Lottotipp();
    Lottotipp_t* ziehung = ziehe_Lottozahlen();
    print_Lottotipp(ziehung);
    //Test erzeugen einer zufälligen Lottozahl
    //for(i = 0; i<10; i++) printf("n = %i\n", neue_Lottozahl());
    //Aufruf des Spiels
    run_Lottospiel();
    return 0;
}