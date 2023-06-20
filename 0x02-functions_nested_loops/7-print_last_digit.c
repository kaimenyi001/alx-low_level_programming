#include "main.h"

/**
 * print_last_digit - the last digit
 *
 * @k: The character
 *
 * Return: 0 Success
 */

int print_last_digit(int k)
{
	int m;

	m = k % 10;
	if (m < 0)
	{
	_putchar(-m + 48);
	return (-m);
	}
	else
	{
	_putchar(m + 48);
	return (m);
	}
}
