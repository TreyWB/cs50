#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Input: Get cc_num from user input
    string cc_num = get_string("Number: ");

    // Get cc_num length
    int len = strlen(cc_num);
    // Call to Function: checksum_total algorithm

    // Calc checksum_last from checksum_total

    // Use checksum_last to determine whether cc_num is valid (using bool valid)

    // Output: Print "INVALID" if bool valid = false

    // Call to Function: first_two_digits

    // Call to Function: first_digit

    // Call to Function: length

    // Output: While bool valid = true, compare length & first digits to issuer list & print if both conditions match

}

    // Function for checksum_total algorithm: Calculate checksum_total from cc_num
int checksum_total(int len, string cc_num)
{
    int multiplied[];
    

    if (len == '16')
    {
        // Get 2nd to last
        digit[14]
    }

    if (len == '15')
    {

    }

    if (len == '13')
    {

    }
}
        // Pull second-to-last from cc_num & every other number starting at second-to-last

            // Multiply each pulled stage1-digit by 2

            // Total stage1-sums to get sum1

        // Pull last-number from cc_num & every other number starting at last-number

            // Add each pulled stage2-digit to get sum2

        // Add sum1 + sum2 = checksum_total

        // Return

    // Function for first_two_digit: While bool valid = true, get first two digits of cc_num

        // Return

    // Function for first_digit: While bool valid = true, get first digit of cc_num
        // Return

    // Function for length: While bool valid = true, get length of cc_num
        // Return