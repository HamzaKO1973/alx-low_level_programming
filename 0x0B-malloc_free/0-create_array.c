#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * create_array - entry point
 * @c: c
 * @size: size
 * Return: return
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *a = (char *)malloc(size * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{

		return (NULL);

	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}
