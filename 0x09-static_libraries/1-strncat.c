#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: string
 * @src: string
 * @n: bytes of src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_index = 0;
	int src_index = 0;

	while (dest[dest_index] != '\0')
	dest_index++;
	for (src_index = 0; src_index < n && src[src_index] != '\0'; src_index++)
	{
		dest[dest_index] = src[src_index];
		dest_index++;
	}
	dest[dest_index] = '\0';
	return (dest);
}
