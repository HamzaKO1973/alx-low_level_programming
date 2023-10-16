#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer converted from the string, or 0 if no valid conversion.
 */
unsigned int _atoi(char *s)
{
	unsigned int result = 0;
	unsigned int sign = 1;
	unsigned int i = 0;
	unsigned int is_number = 0;

	while (s[i])
	{
	if (s[i] == '-')
	{
	sign *= -1;
	}
	if (s[i] >= '0' && s[i] <= '9')
	{
	result = (result * 10) + (s[i] - '0');
	is_number = 1;
	}
	else if (is_number > 0)
	{
	break;
	}
	i++;
	}

	return (result * sign);
}
