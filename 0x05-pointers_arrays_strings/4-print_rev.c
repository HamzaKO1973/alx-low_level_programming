#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The input string to be printed in reverse.
 */
void print_rev(char *s)
{
	int i, j;

	i = j = 0;
	while (s[i] != '\0')
	{
		j = i;
		i++;
	}
	for (i = j; i >= 0; i--)
	{
		if (s[i] != '\0')
			_putchar(s[i]);
	}
	_putchar('\n');
}
