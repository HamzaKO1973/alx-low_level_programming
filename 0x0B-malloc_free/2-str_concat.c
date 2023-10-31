#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s: s
 *
 * @d: d 
 *
 * Return: return
 */

char *str_concat(char *s, char *d)
{
	int i, j, a = 0, b = 0;
	char *concat;

	if (s == NULL)
		s = "";
	if (d == NULL)
		d = "";

	while (s[a])
		a++;
	while (d[b])
		b++;

	concat = (char *)malloc((a + b + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		concat[i] = s[i];

	for (j = 0; d[j] != '\0'; j++)
		concat[a + j] = d[j];

	concat[a + b] = '\0';

	return (concat);
}
