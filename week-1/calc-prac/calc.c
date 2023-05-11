#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // user input
    int x = get_int("x: ");
    int y = get_int("y: ");

    // calculation
    int answer = (x + y);

printf("\n");

    // print answer
    printf("Answer: %i\n", answer);
}