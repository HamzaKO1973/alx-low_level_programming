#include "main.h"

/**
 * _calloc - allocates memory for an array, initialized to 0
 * @n: number of elements
 * @s: byte size of each element
 *
 * Return: void pointer to array space
 */
void *_calloc(int n, int s)
{
	char *p;

	if (!n || !s)
		return (NULL);
	p = malloc(n * s);
	if (!p)
		return (NULL);
	n *= s;
	while (n--)
		p[n] = 0;
	return (p);
}
