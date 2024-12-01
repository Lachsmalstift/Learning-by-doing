#include <stdio.h>

int main() {
    printf("Make an input:");
    char userinp;
    while (1)
    {
        scanf("%f", &userinp);
        if (userinp == 'q')
        {
            break;
        }
    }
    return 0;
}