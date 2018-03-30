// Creating a pyramid for Mario to climb
// Mario less confortable
// By Emmanuel Adutwum
// Problem set 1
// 26 March 2018
#include <stdio.h>
#include <cs50.h>

// Declare a variable n which represent the height
// Or how high Mario wants to climb
int n;

// Declare a variable for row number
int rowNumber;

// Declare a variable for determining
// The number of #s and spaces in each row
int counter;

int main(void)
{
// User is prompted to enter the height of pyramid
    do
    {
        n = get_int("Enter Height: ");
    }
    while (n > 23 || n < 0);

    for (rowNumber = 0; rowNumber < n; rowNumber++)
    {
        // For each mth row, determine the number of spaces
        // Before printing #s
        for (counter = 0; counter < n - rowNumber; counter++)
        {
            printf(" ");
        }

        // Print #s after printing spaces in each row
        for (counter = 0; counter < rowNumber + 2; counter++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
