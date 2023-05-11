#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int score1 = get_int("Score 1: ");
    int score2 = get_int("Score 2: ");
    int score3 = get_int("Score 3: ");

    // Print average score
    printf("Average Score: %f\n", (score1 + score2 + score3) / 3.0);
}