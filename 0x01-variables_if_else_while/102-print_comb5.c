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

	for (n = 0; n < 99; n++)
	{
		for (s = n + 1; s < 100; s++)
		{
			putchar(n / 10 + 48);
			putchar(n % 10 + 48);
			putchar(' ');
			putchar(s / 10 + 48);
			putchar(s % 10 + 48);
			if (n != 98 || s != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
return (0);
}
