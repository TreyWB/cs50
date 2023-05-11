#include <cs50.h>
#include <stdio.h>
#include <math.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);



    // Iterating through numbers between min to max
    for (int i = min; i <= max; i++)
    {
        // Send integer to $prime. If prime returns true, integer is prime
        if (prime(i))
        {
            // print prime numbers
            printf("%i FINAL ANSWER\n", i);
        }
    }
}

bool prime(int number)
{
    // Return t/f value for number 1
        if(number == 1){
            return false;
        }

    for (float j = 2; j <= (number - 1); j++)
    {
        // Divide number by j
        float solution = (number / j);

        // Calculating remainder value
        float check = (solution - (int)solution);

         // Check for remainder, if no remainder then prime = true & return number
        if (check == 0)
        {
            return false;
        }
        else
        {
            continue;
        }
    }
    return true;
}