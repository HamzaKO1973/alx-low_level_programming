#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments.
 * @a: a
 * @v: v
 * Return: return
 */
char *argstostr(int a, char **v)
{
	unsigned long int j;
	int i, k = 0;
	int size = 0;
	char *ptr;

	if (a == 0 || v == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
		size += strlen(v[i]) + 1;
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < strlen(v[i]); j++)
		{
			ptr[k] = v[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	return (ptr);
}
