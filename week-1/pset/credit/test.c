#include <cs50.h>
#include <stdio.h>
#include <string.h>

int every_other_digit(long cc_num);

int main(void)
{
    long cc_num = get_long("Number: ");
    // printf("Output: %s\n", cc_num);

    printf("Original: %li\n", cc_num);

    int sum_every_other_digit = every_other_digit(cc_num);

    printf("Post: %li\n", cc_num);
}

int every_other_digit(long cc_num)
{
    int sum1 = 0;
    bool isAlternateDigit = false;
    while (cc_num > 0)
    {
        if (isAlternateDigit == true)
        {
            int last_digit = cc_num % 10;
            sum1 += last_digit;
        }
        isAlternateDigit = !isAlternateDigit;
        cc_num = cc_num / 10;
        printf("Changed to: %li\n", cc_num);

    }
    return sum1;
}