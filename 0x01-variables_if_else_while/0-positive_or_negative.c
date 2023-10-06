#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    // Initialize the random number generator with the current time
    srand(time(NULL));

    // Generate a random number and store it in the variable n
    n = rand() - RAND_MAX / 2;

    // Check if the number is positive, negative, or zero and print the result
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else
    {
        printf("0 is zero\n");
    }

    return (0);
}
