#include <stdio.h>
int main() {
    double einkommen;
    printf("Geben Sie Ihr Einkommen ein: ");
    scanf("%lf", &einkommen);

        double steuer = 0.0;

    if (einkommen <= 11000) {
        steuer = 0.0;
    } else if (einkommen <= 25000) {
        steuer = (einkommen - 11000) * 0.365;
    } else if (einkommen <= 60000) {
        steuer = (25000 - 11000) * 0.365 + (einkommen - 25000) * 0.432;
    } else {
        steuer = (25000 - 11000) * 0.365 + (60000 - 25000) * 0.432 + (einkommen - 60000) * 0.5;
    }

    printf("Die berechnete Steuer betraegt: %.2f\n", steuer);
    scanf("%*c", 1, getchar());
    return 0;
}
//ende