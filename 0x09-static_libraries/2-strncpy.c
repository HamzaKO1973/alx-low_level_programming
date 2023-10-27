#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: destination string
 * @src: source string
 * @n: bytes to be copied
 * Return: dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int copy_index;

	for (copy_index = 0; copy_index < n && src[copy_index] != '\0'; copy_index++)
	dest[copy_index] = src[copy_index];
	while (copy_index < n)
	{
		dest[copy_index] = '\0';
		copy_index++;
	}
	return (dest);
}
