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

    int multiplied[3];
    multiplied[0] = 3;
    multiplied[1] = 12;
    multiplied[2] = 5;
    int stage1_sum;
        stage1_sum = 0;

    // Saving each digit in cc_num seperately, into the digit[] array
    for (int i = 0; i < 3; i++)
    {
        int split1;
        split1 = 0;
        int split2;
        split2 = 0;

        if (multiplied[i] > 9)
        {
            split1 = multiplied[i] / 10;
            split2 = multiplied[i] % 10;
        }
        stage1_sum += multiplied[i];
        stage1_sum += split1;
        stage1_sum += split2;
        printf("Split 1: %i\n", split1);
        printf("Split 2: %i\n", split2);
        printf("Total: %i\n", stage1_sum);
    }
}