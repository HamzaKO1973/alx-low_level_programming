#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	__putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
