#include <stdio.h>

int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    putchar('\n'); // Print a newline character after the alphabet

    return (0);
}

