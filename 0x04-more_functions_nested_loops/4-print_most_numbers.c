#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9, excluding 2 and 4
 */
void print_most_numbers(void)
{
	char num[] = "01356789";

	int i = 0;

	while (i <= 7)
	{
		_putchar(num[i]);
		i++;
	}
	_putchar(10);
}
