#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: A pointer to the destination memory area.
 * @src: A pointer to the source memory area.
 * @n: The number of bytes to be copied.
 *
 * Return: A pointer to the destination memory area (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	for (unsigned int i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}

	return start;
}
