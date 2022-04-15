#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int input, i, j, k;
    /**
     * user input 
     * if input is < 1 and input is > 8 prompt user again
     * # should increase by 1
     */

    do
    {
        input = get_int("Input your number: ");
    } 
    while (input < 1 || input > 8);

    for (i = 1; i <= input; i++)
    {
        for (k = (input - i); k > 0; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");

    }
    
}