#include "main.h"
#include <string.h>

int is_palindrome_recursive(char *s, int start, int end, int length);

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: string.
 * Return: 0 or 1.
 */
int is_palindrome(char *s)
{
	if (s == NULL)
		return 1;

	int length = strlen(s);
		return is_palindrome_recursive(s, 0, length - 1, length);
}

/**
 * is_palindrome_recursive - test for palindrome string.
 * @s: string.
 * @start: start index.
 * @end: end index.
 * @length: length of s.
 * Return: 0 or 1.
 */
int is_palindrome_recursive(char *s, int start, int end, int length)
{
	if (start >= end)
		return 1;

	if (s[start] == s[end])
		return is_palindrome_recursive(s, start + 1, end - 1, length);
	else
		return 0;
}

