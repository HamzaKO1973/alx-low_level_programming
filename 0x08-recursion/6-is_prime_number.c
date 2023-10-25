#include "main.h"
#include <stdio.h>
/**
 *is_prime_number - check if n is prime number
 * @f: int
 * @n: int
 * Return: 0 et 1
 */

int check_prime(int n, int f);
int is_prime_number (int n)
{
return (check_prime (n, 2));
}

/**
 * check_prime - check all number < n if they can divise it
 * @n: int
 * #f: int
 * Return: int
 */

int check_prime (int n, int f)
{
if (f >= n && n > 1)
	return (1);
else if (n % f == 0 || n <= 1)
	return (0);
else
	return (check_prime (n, f + 1));
}
