#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: string
 * @s2: string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] != '\0' || s2[index] != '\0')
	{
	if (s1[index] < s2[index] || s1[index] > s2[index])
	return (s1[index] - s2[index]);
	index++;
	}
	return (0);
}
