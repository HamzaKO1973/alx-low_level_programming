#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters of a
 * string to uppercase.
 * @str: string of char
 * Return: pointer to char
 */
char *string_toupper(char *str)
{
	int index = 0, offset;

	while (str[index] != '\0')
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	{
	offset = str[index] - 'a';
	str[index] = 'A' + offset;
	}
	index++;
	}
	return (str);
}
