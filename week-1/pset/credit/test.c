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

    int multiplied[2];
    multiplied[0] = 3;
    multiplied[1] = 12;
    multiplied[2] = 5;

    // Saving each digit in cc_num seperately, into the digit[] array
    for (int i = 0; i < 2; i++)
    {
        stage1_sum += multiplied[i];
    }
}