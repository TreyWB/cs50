#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string cc_num = get_string("Number: ");
    // printf("Output: %s\n", cc_num);

    // Getting cc_num length
    int len = strlen(cc_num);
    printf("Length: %i\n", len);

    // Defining cc_num array, automatically defines length of array based on cc_num_length
    int digit[len];

    // Saving each digit in cc_num seperately, into the digit[] array
    for (int i = 0; i < len; i++)
    {
        digit[i] = 0;
        digit[i] = (cc_num[i] - 48);
        printf("Digit: %i\n", digit[i]);

    }
}