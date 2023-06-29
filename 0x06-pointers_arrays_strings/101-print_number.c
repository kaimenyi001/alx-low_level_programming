#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 * Return: 0
 */

void print_number(int n)
{
	unsigned int m, p, r;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}
	p = m;
	r = 1;

	while (p > 9)
	{
		p /= 10;
		r *= 10;
	}

	for (; r >= 1; r /= 10)
	{
		_putchar(((m / p) % 10) + 48);
	}
}
