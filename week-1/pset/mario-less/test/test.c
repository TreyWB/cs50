#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // User input
    int n;
    do
    {
         n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // set line count
    int current_line  = 1;

    // META LOOP - Loops until n is reached
    do
    {
        // print # loop
        int x = current_line;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < (current_line - 1); j++)
            {
                printf(".");
            }

            printf("#");

            // break or return or sm;  to go to \n loop
        }

        // print \n each time META loops
        printf("\n");

        // Iterate current_line + 1
        current_line = current_line + 1;

        // continue(?) [probably not]

    }
    while (current_line <= n);
}