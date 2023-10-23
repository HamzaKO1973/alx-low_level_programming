#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0') {
	char *a = accept;  // Initialize a pointer to the beginning of accept
	while (*a != '\0') {
	if (*s == *a) {
	return s;
	}
	a++;
	}
	s++;
	}
	return NULL;
}
