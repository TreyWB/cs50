#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string message = get_string("Message: \n");
    int len = strlen(message);

    // Initialize product array
    int bit[BITS_IN_BYTE];
    // int remainer;

    // META LOOP: Iterate over each character in string
    for (int i = 0; i < len; i++)
    {
        int input = message[i];

        // ASCII to Binary Loop
        while (input > 0)
        {
            for (int j = 0; j < len; j++)
            {
                int remainder;
                remainder = input % 2;

                if (remainder != 0)
                {
                    bit[j] = 1;
                }
                else
                {
                    bit[j] = 0;
                }

                input = input / 2;
            }

            for (int k = BITS_IN_BYTE; k >= 0; k--)
            {
                print_bulb(bit[k]);
            }

            printf("\n");
        }
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}