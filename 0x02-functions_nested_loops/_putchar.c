#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character с to stdout
 * Oc: The character to print
 *
 * Return: On success 1.
 *         On error, -1 is returned, and errno is set appropri ately.
 */
int _putchar (char c)
{
	return (write(1, &C, 1));
}
