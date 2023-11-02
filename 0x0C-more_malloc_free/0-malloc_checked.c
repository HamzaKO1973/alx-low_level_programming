#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked -  a function that allocates memory
 *
 * @c : c
 *
 * Return: 0
 */

void *malloc_checked(int c)
{
	int *a = malloc(c);

	if (a == NULL)

		exit(98);

	return (a);
}
