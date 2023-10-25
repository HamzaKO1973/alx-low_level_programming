/**
 * _print_rev_recursion - Prints string in reverse
 * @s: A pointer to string
 * *Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

