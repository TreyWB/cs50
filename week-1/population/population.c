#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n;
    do
    {
        n = get_int("Start Size: ");
    }
    while (n < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End Size: ");
    }
    while (end < n);

    // TODO: Calculate number of years until we reach threshold
    int y = 0; // years
    do
    {
        n = n + (n / 3) - (n / 4);
        y += 1; // iterating by 1 year
    }
    while (n < end);

    // TODO: Print number of years
    printf("Years: %i\n", y);
}