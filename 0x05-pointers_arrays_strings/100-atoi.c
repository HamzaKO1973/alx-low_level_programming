#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer converted from the string, or 0 if no valid conversion.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	int is_number = 0;

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
