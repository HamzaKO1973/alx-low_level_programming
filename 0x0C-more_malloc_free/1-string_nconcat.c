#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @h: string to append to
 * @m: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *h, char *m, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (h && h[len1])
		len1++;
	while (m && m[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (i < len1)
	{
		s[i] = m[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		s[i++] = m[j++];

	while (n >= len2 && i < (len1 + len2))
		s[i++] = m[j++];

	s[i] = '\0';

	return (s);
}
