#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string cc_num = get_string("Number: ");
    // printf("Output: %s\n", cc_num);

    int sum_every_other_digit = every_other_digit(cc_num);
}

int every_other_digit(string cc_num)
{
    int len = strlen(cc_num);

    long digit;
    digit = cc_num;

    int sum = 0;
    bool isAlternateDigit = false;
    while (cc_num > 0)
    {
        if (isAlternateDigit == true)
        {
            int last_digit =
        }
    }
}