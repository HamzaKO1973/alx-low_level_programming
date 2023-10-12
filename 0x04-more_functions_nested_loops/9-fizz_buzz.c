#include <stdio.h>

/**
 * main - the staring point of the code
 *
 * Return: 0 always success
 *
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
		putchar(' ');
		}
	i++;
	}
	putchar('\n');

	return (0);
}
