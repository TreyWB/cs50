#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int times = get_int("How many times?\n");

    printf("I will meow %i times!\n", times);

    for(int i = 0; i < times; i++)
    {
        printf("\n");
        printf("Meow");
    }

        printf("\n\n");
}