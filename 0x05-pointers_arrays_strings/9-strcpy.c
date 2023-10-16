#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the null byte, to dest.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 * Return: The pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
        	dest[i] = src[i];
	}

	dest[i] = '\0';

	return dest;
}
