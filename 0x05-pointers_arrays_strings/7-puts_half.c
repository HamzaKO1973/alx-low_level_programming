#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The string to print the second half of.
 */
void puts_half(char *str)
{
	int len = 0;
	int i;
	int start;

	/* Calculate the length of the string */
	while (str[len] != '\0')
	len++;

	/* Calculate the starting index for the second half */
	start = (len + 1) / 2;

	/* Print the second half of the string */
	for (i = start; i < len; i++)
	_putchar(str[i]);

	_putchar('\n');
}
