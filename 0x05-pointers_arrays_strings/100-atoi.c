#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer, or 0 if an error occurs.
 */
int _atoi(char *s)
{
	int sign = 1; /* Initialize the sign as positive */
	int result = 0; /* Initialize the result */
	int i = 0;
	int limit = INT_MAX / 10; /* Maximum integer value divided by 10 */

	while (s[i] != '\0')
	{
	if (s[i] == '-')
	{
	sign = -sign; /* Handle negative sign */
	}
	else if (s[i] >= '0' && s[i] <= '9')
	{
	/* Check for integer overflow before adding the digit */
	if (result > limit || (result == limit && (s[i] - '0') > 7))
	{
	return (sign == 1 ? INT_MAX : INT_MIN);
	}
	/* Accumulate the digit into the result */
	result = result * 10 + (s[i] - '0');
	}
	else if (result != 0)
	{
	/* Break the loop if non-digit characters follow digits */
	break;
	}
	i++;
	}

	return (result * sign);
}
