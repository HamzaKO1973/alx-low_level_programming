#include "main.h"
#include <stdio.h>

int _isdigit(int c);

int main(void)
{
    char c;

    c = '5';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'A';
    printf("%c: %d\n", c, _isdigit(c));

    return (0);
}
