#include <stdio.h>
#define PI 3.14159f

int main() 
{
float r;
printf("Please enter the radius of the circle: ");
scanf("%f", &r);

float a = PI * (r * r);
float p = 2 * PI * r;
if(r <= 0)
{
    printf("The radius must be greater than 0!");
    return 1;
}
else if (r > 0)
{
    printf("The area of the circle is: %f\n", a);
    printf("The perimeter of the circle is %f\n", p);
    printf("Thanks for using my tool!");
}

    return 0;
}