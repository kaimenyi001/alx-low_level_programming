#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int m, n, s;

	for (m = 0; m < 10; m++)
	{
		for (n = m + 1; n < 10; n++)
		{
			for (s = n + 1; s < 10; s++)
			{
				putchar(m + 48);
				putchar(n + 48);
				putchar(s + 48);
					if (m != 7 || n != 8 || s != 9)
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}
