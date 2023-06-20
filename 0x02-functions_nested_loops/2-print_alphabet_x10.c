#include "main.h"

/**
 * print_alphabet_x10 - print 10 times  the alphabet
 *
 * Return: 0 Success
 */

void print_alphabet_x10(void)
{
	int i, a;

	for (a = 0; a <= 9; a++)
	{
	for (i = 97; i < 123; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
	}
}
