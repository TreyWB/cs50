#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    int len = strlen(argv[1]);

    for (int i = 0; i < len; i++)
    {
        int c = argv[i];
    }

    if (isdigit(c) = 0)
    {
        printf("Usage: ./caesar key\n");
    }

    printf("plaintext: %s\n", argv[1]);
}