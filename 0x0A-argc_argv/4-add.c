#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: argc
 * @argv: argv 
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				print("Error\n");
				return 1;
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
