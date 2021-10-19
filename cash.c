#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float money;
    do
    {
        money = get_float("How much change do I owe you, pal ? \n"); //Loop to ask the user for a integer.
        if (money < 0)
        {
            printf("SAY WHAT ?\n");
        }
        if (money == 0)
        {
            printf("I owe you nothing, then. C'mon, stop playing games friendo.\n");
        }

    }
    while (money <= 0);

    //coin values -> 25, 10, 5, 1. Quarter, Dime, Penny, Nickel.

    int cents = round(money*100); //Coin value has no elements after the comma, therefore we need to round the variable money, which might come as a float.
    int coincount = 0;

    while(cents >= 25)
    {
        cents = cents - 25;
        coincount++;
    }
    while(cents >= 10)
    {
        cents = cents - 10;
        coincount++;
    }
    while(cents >= 5)
    {
        cents = cents - 5;
        coincount++;
    }
    while(cents >= 1)
    {
        cents = cents - 1;
        coincount++;
    }
    printf("Here you go, %i coins.\nTrust me, it's the exact value.\nGet out of my sight.\n", coincount);
}



