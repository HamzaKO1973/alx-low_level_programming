#include "main.h"

/**
 * print_diagonal - prints a diagonal line of backslashes
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i = 1;
	int j = 0;

	if (n > 0)
	{
		_putchar(92);
		_putchar(10);
		while (i < n)
		{
			while (j < i)
			{
				_putchar(' ');
			j++;
			}

		_putchar(92);
		_putchar(10);
		i++;
		j = 0;
		}

	}
	else
	{
		_putchar(10);
	}
}
