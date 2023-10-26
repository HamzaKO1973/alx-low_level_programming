#include "main.h"
#include <string.h>
/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: string.
 * Return: 0 or 1.
 */
int is_palindrome(char *s)
{
	int a = 0;
	unsigned long int b = strlen(s) - 1;

	if (s == 0)
		return (1);
	return (is_palindrome(s, a, b));
}
/**
 * test_palindrome - test for palindrome string.
 * @s: string.
 * @a: counter.
 * @b: lenght of s.
 * Return: 0 or 1.
 */
int test_palindrome(char *s, int a, unsigned long int b)
{
	if (s[a] == s[b])
	{
		if (b == (strlen(s) / 2))
			return (1);
		else
			return (test_palindrome(s, a + 1, b - 1));
	}
	else
		return (0);
}
