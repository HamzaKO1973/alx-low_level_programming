#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int new_variable;

	while (1)
	{
	new_variable = *s++;
	if (new_variable == c)
	{
	return (s - 1);
	}
	if (new_variable == 0)
	{
	return (NULL);
	}
	}
}
