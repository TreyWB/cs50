#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    int len = strlen(argv[1]);

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
    }

    printf("plaintext: %s\n", argv[1]);
}