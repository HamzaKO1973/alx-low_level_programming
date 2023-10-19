#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * @str: string.
 * Return: str.
 */
char *leet(char *str)
{
	char leet_code[][2] = {{'A', '4'}, {'E', '3'}, {'O', '0'}, {'T', '7'}, {'L', '1'}};
	int str_index = 0, code_index = 0;

	while (str[str_index] != '\0')
	{
	for (code_index = 0; code_index < 5; code_index++)
	{
	if (str[str_index] == leet_code[code_index][0] || str[str_index] == leet_code[code_index][0] + 32)
	str[str_index] = leet_code[code_index][1];
	}
	str_index++;
	}
	return (str);
}
