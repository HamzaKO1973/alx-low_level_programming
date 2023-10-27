#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of 2 numbers.
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int op;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	else
	{

		op = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", op);
	}
	return (0);
}
