#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string message = get_string("Message: \n");
    int len = strlen(message);

    for (int i = 0; i < len; i++)
    {
        // Send each character in message to binary converter
        int ASCII = binary_convert(message[i]);
    }
}

 binary_convert(int ASCII)

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