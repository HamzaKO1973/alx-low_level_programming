#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function for returning  a pointer to a new string.
 *
 * @str: str
 *
 * Return: return
 */

char *_strdup(char *str)
{

	int i, a = 0;
	char *sat;

	if (str == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}


	sat = (char *)malloc(a + 1);

	if (sat != NULL)
	{
		for (i = 0; i < a; i++)
		{
			sat[i] = str[i];
		}

		sat[a] = '\0';


	}
	return (sat);
}
