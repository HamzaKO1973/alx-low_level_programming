#include "main.h"

/**
 * print_square - prints a square made of #
 * @size: the size of the square
 */
void print_square(int size)
{
	int i = 0;

	int j = 0;

	if (size > 0)
	{
	while (i < size)
	{
		while (j < size)
		{
			_putchar('#');
		j++;
		}
		_putchar(10);
		j = 0;
	i++;
	}
	}
	else
	{
		_putchar(10);
	}
}
