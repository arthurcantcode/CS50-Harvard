#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do // prompts the user for a positive integer, must be located between 1 and 8, otherwise prompt user for new integer.
    {
        height = get_int("Desired height ? ");
    } 
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++) //height iteration, main loop.
    {
        for (int blank = 0; blank < height - i - 1; blank++) //blank iteration.
        {
            printf(" ");
        }
        for (int hash = 0; hash <= i; hash++) //hashtag iteration.
        {
            printf("#");
        }
        printf("\n");
    }
}