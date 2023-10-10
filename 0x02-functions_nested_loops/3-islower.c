#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int main(void)
{
	int r;

	r = _islower('H');  /* Not a lowercase letter, so returns 0 */
	_putchar(r + '0');  /* Prints '0' */

	r = _islower('o');  /* Is a lowercase letter, so returns 1 */
	_putchar(r + '0');  /* Prints '1 */

	r = _islower(108);   /* Is a lowercase letter ('l' in ASCII), so returns 1 */
	_putchar(r + '0');   /* Prints '1 */

	_putchar('\n');  /* Newline character */

	return (0);
}
