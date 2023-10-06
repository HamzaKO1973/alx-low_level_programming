#include <stdio.h>

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch); /* Print character if it's not 'q' or 'e' */
		}
		ch++;
	}

	putchar('\n'); /* Print a newline character */

	return (0);
}
