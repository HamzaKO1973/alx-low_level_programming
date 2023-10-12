#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times, followed by a new line
 */
void more_numbers(void)
{
	char num[] = "01234567891011121314";

	int i = 0;

	int j = 0;

	while (j < 10)
	{
		while (i <= 19)
		{
			_putchar(num[i]);
		i++;
		}
		_putchar(10);
		i = 0;
	j++;
	}
}
