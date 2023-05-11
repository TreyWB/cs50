// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>

string replace(string input);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1;
    }
    printf("%s\n", replace(argv));
    printf("Argv: %s\n", replace(argv[1]));
    return 0;
}

string replace(string input)
{
    return 0;
}
