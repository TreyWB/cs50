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
        printf("Missing command-line argument\n");
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
        printf("Lower: %c\n", c);

    }
return 0;
}
