// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string replace(string input);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./no-vowels word\n");
        return 1;
    }

    string input = argv[1];

    printf("Replaced: %s\n", replace(input));
}

string replace(string input)
{
    int len;
    len = strlen(input);

    string output;
    output = input;

    for (int i = 0; i < len; i++)
    {
        // Replace uppercase letters with lowercase
        char c = tolower(input[i]);
                                                                                // printf("Lower: %c\n", c);
        if (input[i] == 'a')
        {
            input[i] = '6';
            return 0;
        }
        if (input[i] == 'e')
        {
            input[i] = '3';
            return 0;
        }
        if (input[i] == 'i')
        {
            input[i] = '1';
            return 0;
        }
        if (input[i] == 'o')
        {
            input[i] = '0';
            return 0;
        }
    }

    // return replace; or return replaced;
    return 0;

}