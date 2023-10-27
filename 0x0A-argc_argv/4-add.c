#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coins
 * @argc: argc
 * @argv: argv 
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, po, so = 0;

	for (i = 1; i < argc; i++)
	{

		po = atoi(argv[i]);

		if (po <= 0)
		{
			printf("Error\n");

			return (1);
		}

		so = so + po;
	}

	printf("%d\n", so);

	return (0);
}
