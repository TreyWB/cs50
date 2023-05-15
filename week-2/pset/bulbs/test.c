#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int input = get_int("Decimal: ");

    // Initialize product array
    int product[6];

    int remainder[6];

    while (input > 0)
    {
        for (int i = 0; i < 6; i++)
        {
            remainder[i] = input % 2;

            if (remainder[i] != 0)
            {
                product[0] = 1;
            }
            else
            {
                product[0] = 0;
            }

            input = input / 2;
        }

    }

}