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

    string replaced;

    for (int i = 0; i < len; i++)
    {
        // Replace uppercase letters with lowercase
        if (isupper(argv[1] == 'A'))
        {
            argv[i] = 'A' + 32;
            return 0;
        }
        else if (isupper(char argv[1] == 'E'))
        {
            argv[i] = 'E' + 32;
            return 0;
        }
        else if (isupper(char argv[1] == 'I'))
        {
            argv[i] = 'I' + 32;
            return 0;
        }
        else if (isupper(char argv[1] == 'O'))
        {
            argv[i] = 'O' + 32;
            return 0;
        }

        if (argv[i] == 'a')
        {
            argv[i] = '54';
            return 0;
        }
        if (argv[i] == 'e')
        {
            argv[i] = '51';
            return 0;
        }
        if (argv[i] == 'i')
        {
            argv[i] = '49';
            return 0;
        }
        if (argv[1] == 'o')
        {
            argv[i] = '48';
            return 0;
        }
    }

    return replace;
}