#include <stdio.h>
/**
 * main - print the number of arguments passed into the programe
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int i =0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
