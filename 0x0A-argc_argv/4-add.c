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
	if (argc == 2)
	{
	int i, lea = 0, mon = atoi(argc[1]);
	int cents[] = {25, 10, 5, 2, 1,};

	for (i = 0; i < 5; i++)
	{
		if (money >= cents[i])
		{

			lea += mon / cents[i];
			mon = mon % cents[i];
			if (money % cents[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
