#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int input = get_int("Decimal: ");

    // Initialize product array
    int product[6];

    int remainder;

    while (input > 0)
    {
        for (int i = 0; i < 6; i++)
        {
            remainder = input % 2;

            if (remainder != 0)
            {
                product[i] = 1;
            }
            else
            {
                product[i] = 0;
            }

            input = input / 2;
        }


        for (int i = 6; i > 0; i--)
        {
            
        }
    }


    printf("Done\n");
}