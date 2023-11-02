#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function concatenates two strings
 *
 * @h: h
 * @m: m
 * @n: n parametre
 *
 * Return: success.
 */

char *string_nconcat(char *h, char *m, int n)
{
	char *concat;

	int i, j, a = 0, b = 0;

	if (h == NULL)
		h = "";
	if (m == NULL)
		m = "";

	while (h[a])
		a++;
	while (m[b])
		b++;

	if (n >= b)
		n = b;

	concat = (char *)malloc(a + n + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		concat[i] = h[i];

	for (j = 0; j < n; j++)
		concat[a + j] = m[j];

	concat[a + n] = '\0';

	return (concat);
}
