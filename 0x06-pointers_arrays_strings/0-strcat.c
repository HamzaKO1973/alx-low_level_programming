#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: string
 * @src: string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_idx = 0, src_idx = 0;

	while (dest[dest_idx] != '\0')
	dest_idx++;
	while (src[src_idx] != '\0')
	{
		dest[dest_idx] = src[src_idx];
		src_idx++;
		dest_idx++;
	}
	dest[dest_idx] = '\0';
	return (dest);
}
