#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char upper_ch = 'A';

	while (ch <= 'z')
	{
	putchar(ch); /* Print lowercase character*/
	ch++;
	}

	while (upper_ch <= 'Z')
	{
	putchar(upper_ch); /* Print uppercase character*/
	upper_ch++;
	}

	putchar('\n'); /* Print a newline character*/

	return (0);
}
