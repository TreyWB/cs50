// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    int len = strlen(password);

    // Bools for Criteria check
    bool lowercase = false;
    bool uppercase = false;
    bool number = false;
    bool symbol = false;

    for (int i = 0; i < len; i++)
    {
        // Check for lowercase
        if (lowercase == false)
        {
            int lower = islower(password[i]);
            if (lower != 0)
            {
                lowercase = true;
            }
        }

        // Check for uppercase
        if (uppercase == false)
        {
            int upper = isupper(password[i]);
            if (upper != 0)
            {
                uppercase = true;
            }
        }

        // Check for number
        if (number == false)
        {
            int num = isdigit(password[i]);
            if (num != 0)
            {
                number = true;
            }
        }

        // Check for symbol
        if (symbol == false)
        {
            int sym = islower(password[i]);
            if (sym != 0)
            {
                symbol = true;
            }
        }
    }

    if (lowercase == true && uppercase == true && number == true && symbol == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}