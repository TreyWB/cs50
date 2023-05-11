// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>

string replace(string argv[1]);

int main(int argc, string argv[])
{
    if (argc != 1)
    {
        printf("Usage: ./no-vowels word\n");
        return 1;
    }

    printf("%s\n", replace(string argv[1]));
}

string replace(string argv[1])
{
    int len;
    len = argv[1];

    string replaced;

    for (i = 0; i < len; i++)
    {
        
    }
}