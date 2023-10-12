#include "main.h"

/**
 * print_line - prints a straight line of underscores
 * @n: the number of times the character _ should be printed
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
	i++;
	}
	_putchar(10);
}
