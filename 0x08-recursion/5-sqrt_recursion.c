#include "main.h"

/**
 * pwr_op - returns natural sqrt of a number
 * @m: integer
 * @n: integer
 * Return: void
 */

int pwr_op(int m, int n)
{
	if (n % (m / n) == 0)
	{
		if (n * (m / n) == m)
			return (n);
		else
			return (-1);
	}
	return (0 + pwr_op(m, n + 1));
}
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer value
 * Return: void
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (pwr_op(n, 2));
}
