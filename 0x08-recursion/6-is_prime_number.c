#include "main.h"

/**
 * is_prime - detects a prime number
 * @m: integer value
 * @n: integer value
 * Return: void
 */

int is_prime(unsigned int m, unsigned int n)
{
	if (m % n == 0)
	{
		if (m == n)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(m, n + 1));
}

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: integer value
 * Return: void
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (0);
	else
		return (is_prime(n, 2));
}
