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
                                // printf("\nMain Number: %i\n", number);

    // Return t/f value for 1 to 3
    if(number <= 1){
        return false;
    }

    if(number == 2 || number == 3){
        return true;
    }

    for (int i = 2; i < number; i++)
    {
                                // printf("j = %.2f\n", j);
        // Divide number by j
        if(number % i == 0){
            return false;
        }
    }
                        // printf("%i IS A PRIME\n", number);
    return true;
}


                                // printf("%.2f is solution\n", solution);

        // Calculating remainder value
        // float check = (solution - (int)solution);
                                //  printf("%.2f is check value\n", check);

         // Check for remainder, if no remainder then prime = true & return number
        // if (check == 0)
        // {
        //     printf("BROKE HERE not prime\n");
        //     break;

        // }
        // else
        // {
        //         continue;
        // }
        // // {
        //      continue;
        //                         printf("prime\n");
        // }

