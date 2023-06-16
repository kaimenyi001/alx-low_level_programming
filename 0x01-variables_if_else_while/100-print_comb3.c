#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	int s;

	for (n = 0; n <= 9; n++)
	{
		for (s = n + 1; s <= 9; s++)
		{
			putchar(n + '0');
			putchar(s + '0');

			if (n < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
return (0);
}
