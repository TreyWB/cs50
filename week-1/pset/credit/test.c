#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string cc_num = get_string("Number: ");
    // printf("Output: %s\n", cc_num);

    // Getting cc_num length
    int cc_num_length = strlen(cc_num);
    printf("Length: %i\n", cc_num_length);

    // Defining cc_num array, automatically defines length of array based on cc_num_length
    int digit[cc_num_length];

    // Saving each digit in cc_num seperately, into the digit[] array
    for (int i = 0; i < cc_num_length; i++)
    {
        digit[i] = cc_num[i];

    }
}