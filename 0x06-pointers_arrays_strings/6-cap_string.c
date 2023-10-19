#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * Separators of words: space, tabulation
 * new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @str: string
 * Return: str
 */
char *cap_string(char *str)
{
	char separators[] = {
	' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
	};
	int str_index = 0, separator_index = 0;

	while (str[str_index] != '\0')
	{
	while (separators[separator_index] != '\0')
	{
	if (str[str_index] == separators[separator_index] && (str[str_index + 1] >= 'a' && str[str_index + 1] <= 'z'))
	str[str_index + 1] -= 32;
	separator_index++;
	}
	separator_index = 0;
	str_index++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
	str[0] -= 32;
	return str;
}
