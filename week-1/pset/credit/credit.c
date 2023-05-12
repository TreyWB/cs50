#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int checksum_total(string num);
int first_digit(string cc_num);
int first_two_digit(string cc_num);

int main(void)
{
    // Input: Get cc_num from user input
    for (int i = 0; i < strlen(cc_num); i++)
    {
        while (isdigit(cc_num[i]) != 0);
        {
            string cc_num = get_string("Number: ");
        }
    }

    // Get cc_num length
    int length = strlen(cc_num);

    // Call to Function: checksum_total algorithm
                                                        // printf("Checksum: %i\n", checksum_total(cc_num));

    int checksum_last;
    checksum_last = 0;
    bool valid;

    // Use checksum_last to determine whether cc_num is valid (using bool valid)
    checksum_last = checksum_total(cc_num) % 10;
    // Calc checksum_last from checksum_total
    if (checksum_last == 0)
    {
        valid = true;
    }
    else (valid = false);

                                                        // printf("Checksum Last: %i\n", checksum_last);
                                                        // printf("Valid: %s\n", valid?"true":"false");

    // Output: Print "INVALID" if bool valid = false
    if (valid == false)
    {
        printf("INVALID\n");
        exit(0);
    }

    // Check cc_num characteristics against issuer criteria
    if (length == 13 || length == 16)
    {
        if (first_digit(cc_num) == 4 && valid == true)
        {
            printf("VISA\n");
            exit(0);
        }

        if (first_two_digit(cc_num) >= 51 && first_two_digit(cc_num) <= 55 && valid == true)
        {
            printf("MASTERCARD\n");
            exit(0);
        }
        else
        {
            printf("INVALID\n");
        }
    }

    else if (length == 15 && valid == true)
    {
        if (first_digit(cc_num) == 34 || first_digit(cc_num) == 37)
        {
            printf("AMEX\n");
            exit(0);
        }
        else
        {
            printf("INVALID\n");
            exit(0);
        }
    }

    else if (length > 16 || length < 13 || length == 14)
    {
        printf("INVALID\n");
        exit(0);
    }
}

    // Function for checksum_total algorithm: Calculate checksum_total from cc_num
int checksum_total(string cc_num)
{
    int stage1_sum;
    stage1_sum = 0;
    int stage2_sum;
    stage2_sum = 0;

    // Get cc_num length
    int len = strlen(cc_num);

    if (len == 16)
    {
        // Initializations
        int multiplied[8];
        int digit[16];

        // Move each digit from cc_num into digit array
        for (int i = 0; i < len; i++)
        {
            digit[i] = (cc_num[i] - 48);
        }

        // Taking 2nd to last & every other number before (stage1 digits) then multiplying stage1 digits by 2
        multiplied[0] = digit[14] * 2;
        multiplied[1] = digit[12] * 2;
        multiplied[2] = digit[10] * 2;
        multiplied[3] = digit[8] * 2;
        multiplied[4] = digit[6] * 2;
        multiplied[5] = digit[4] * 2;
        multiplied[6] = digit[2] * 2;
        multiplied[7] = digit[0] * 2;

        // Sum up every multiplied number to get sum of stage1
        for (int i = 0; i < 8; i++)
        {
            int split1;
            int split2;
            split1 = 0;
            split2 = 0;

            if (multiplied[i] <= 9)
            {
                stage1_sum += multiplied[i];
            }

            else if (multiplied[i] > 9)
            {
                split1 = multiplied[i] / 10;
                split2 = multiplied[i] % 10;
                stage1_sum += split1;
                stage2_sum += split2;
            }
        }

        // Pull every number not yet pulled & getting sum of stage2
        stage2_sum += digit[15];
        stage2_sum += digit[13];
        stage2_sum += digit[11];
        stage2_sum += digit[9];
        stage2_sum += digit[7];
        stage2_sum += digit[5];
        stage2_sum += digit[3];
        stage2_sum += digit[1];
    }

    if (len == 15)
    {
        // Initializations
        int multiplied[7];
        int digit[15];

        // Move each digit from cc_num into digit array
        for (int i = 0; i < len; i++)
        {
            digit[i] = (cc_num[i] - 48);
        }

        // Taking 2nd to last & every other number before (stage1 digits) then multiplying stage1 digits by 2
        multiplied[0] = digit[13] * 2;
        multiplied[1] = digit[11] * 2;
        multiplied[2] = digit[9] * 2;
        multiplied[3] = digit[7] * 2;
        multiplied[4] = digit[5] * 2;
        multiplied[5] = digit[3] * 2;
        multiplied[6] = digit[1] * 2;

        // Sum up every multiplied number to get sum of stage1
        for (int i = 0; i < 7; i++)
        {
            int split1;
            int split2;
            split1 = 0;
            split2 = 0;

            if (multiplied[i] <= 9)
            {
                stage1_sum += multiplied[i];
            }

            else if (multiplied[i] > 9)
            {
                split1 = multiplied[i] / 10;
                split2 = multiplied[i] % 10;
                stage1_sum += split1;
                stage2_sum += split2;
            }
        }

        // Pull every number not yet pulled & getting sum of stage2
        stage2_sum += digit[14];
        stage2_sum += digit[12];
        stage2_sum += digit[10];
        stage2_sum += digit[8];
        stage2_sum += digit[6];
        stage2_sum += digit[4];
        stage2_sum += digit[2];
        stage2_sum += digit[0];
    }

    if (len == 13)
    {
        // Initializations
        int multiplied[6];
        int digit[13];

        // Move each digit from cc_num into digit array
        for (int i = 0; i < len; i++)
        {
            digit[i] = (cc_num[i] - 48);
        }

        // Taking 2nd to last & every other number before (stage1 digits) then multiplying stage1 digits by 2
        multiplied[0] = digit[11] * 2;
        multiplied[1] = digit[9] * 2;
        multiplied[2] = digit[7] * 2;
        multiplied[3] = digit[5] * 2;
        multiplied[4] = digit[3] * 2;
        multiplied[5] = digit[1] * 2;

        // Sum up every multiplied number to get sum of stage1
        for (int i = 0; i < 6; i++)
        {
            int split1;
            int split2;
            split1 = 0;
            split2 = 0;

            if (multiplied[i] <= 9)
            {
                stage1_sum += multiplied[i];
            }

            else if (multiplied[i] > 9)
            {
                split1 = multiplied[i] / 10;
                split2 = multiplied[i] % 10;
                stage1_sum += split1;
                stage2_sum += split2;
            }
        }

        // Pull every number not yet pulled & getting sum of stage2
        stage2_sum += digit[12];
        stage2_sum += digit[10];
        stage2_sum += digit[8];
        stage2_sum += digit[6];
        stage2_sum += digit[4];
        stage2_sum += digit[2];
        stage2_sum += digit[0];
    }

    // Adding stage1 sum and stage2 sum together to get total
    int total;
    total = 0;
    total = stage1_sum + stage2_sum;

    return total;
}

    // Function for first_two_digit: While bool valid = true, get first two digits of cc_num
int first_digit(string cc_num)
{
    // Get cc_num length
    int len = strlen(cc_num);

    int first;
    first = 0;

                                                                        // printf("CC Num: %s\n", cc_num);

    long number;
    number = 0;
    number = atof(cc_num);

    if (len == 16)
    {
        first = number / 1000000000000000;
    }

    if (len == 15)
    {
        first = number / 100000000000000;
    }

    if (len == 13)
    {
        first = number / 1000000000000;
    }

    return first;
}

int first_two_digit(string cc_num)
{
    // Get cc_num length
    int len = strlen(cc_num);

    int first_two;
    first_two = 0;

    long number;
    number = 0;
    number = atof(cc_num);

    if (len == 16)
    {
        first_two = number / 100000000000000;
    }

    if (len == 15)
    {
        first_two = number / 10000000000000;
    }

    if (len == 13)
    {
        first_two = number / 100000000000;
    }

    return first_two;
}

    // Function for first_digit: While bool valid = true, get first digit of cc_num
        // Return

















    // Function for length: While bool valid = true, get length of cc_num
        // Return