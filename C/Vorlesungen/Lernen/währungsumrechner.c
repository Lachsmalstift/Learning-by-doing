#include <stdio.h>
int main()
{
float silbert = 0;
float goldt = 0;

for (goldt = 0; goldt <= 100; goldt = goldt + 0.5)
{
    silbert = goldt / 0.72;
    printf("%f Goldtaler sind %f Silbertaler\n", goldt, silbert);
}

return 0;
}