#include <stdio.h>

enum Beverage
{
    NO_BEVERAGE,
    WATER,
    COLA,
    FANTA,
    SPRITE,
    COFFEE,
    CHEEKY = 69,
};

int main() {
    enum Beverage selected_beverage = NO_BEVERAGE;
    printf("Select a drink:\nCancel (0)\nWater (1)\nCola (2)\nFanta (3)\nSprite (4)\nCoffee (5)\n ");
    scanf("%i", &selected_beverage);

    switch(selected_beverage)
    {
        case NO_BEVERAGE:
        {
            printf("You canceled your order.");
            return 1;
            break;
        }
        case WATER:
        {
            printf("You selected water.");
            break;
        }
        case COLA:
        {
            printf("You selected cola.");
            break;
        }
        case FANTA:
        {
            printf("You selected fanta.");
            break;
        }
        case SPRITE:
        {
            printf("You selected sprite.");
            break;
        }
        case COFFEE:
        {
            printf("You selected coffee.");
            break;
        }
        case CHEEKY:
        {
            printf("haha, funny number!");
            break;
        }
    default:
        {
            printf("Invalid input. Try again!");
            return 1;
            break;
        }
    }
    getchar();
    printf("\nPress Enter to exit!");
    getchar();
return 0;
}