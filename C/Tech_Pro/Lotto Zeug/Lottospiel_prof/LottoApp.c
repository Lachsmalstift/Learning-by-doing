#include "Lotto_utils.c"
#include "Lottotipp.c"
#include "Lotto_Settings.c"
#include "Lottospiel.c"

int main()
{
    int i;
    // initialisierung des Settings und des Zufallszahlengenerators
    Settings_t* settings = init_settings();
    // Test new_Lottotipp und print_Lottotipp
    Lottotipp_t* mein_Tipp = new_Lottotipp();
    Lottotipp_t* ziehung = ziehe_Lottozahlen();
    print_Lottotipp(mein_Tipp);
    print_Lottotipp(ziehung);
    // Test erzeugen einer zufälligen Lottozahl
    //for (i = 0; i < 10; i++) printf("n = %i\n",neue_Lottozahl());
    // aufruf des Spiels
    run_Lottospiel();
    return 0;
}
