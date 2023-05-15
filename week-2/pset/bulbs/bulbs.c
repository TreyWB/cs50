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
    int bit[6];
    int remainer;

    for (int i = 0; i < len; i++)
    {
        // Convert each character in message
        while (input > 0)
        {
            for (int i = 0; i < len; i++)
            {
                remainder = input % 2;

                if (remainder != 0)
                {
                    bit[i] = 1;
                }
                else
                {
                    bit[i] = 0;
                }

                input = input / 2;
            }

            for (int i = BITS_IN_BYTE; i > 0; i--)
            {
                print_bulb(bit[i]);
            }

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