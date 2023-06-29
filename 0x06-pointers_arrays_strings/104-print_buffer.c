#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: array
 * @size: amount of bytes
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int m, n, p;

	if (size <= 0)
		printf("\n");
	else
	{
		for (m = 0; m < size; m += 10)
		{
			printf("%.8x:", m);
			for (n = m; n < m + 10; n++)
			{
				if (n % 2 == 0)
					printf(" ");
				if (n < size)
					printf("%.2x", b[n]);
				else
					printf("  ");
			}
			printf(" ");
			for (p = m; p < m + 10; p++)
			{
				if (p >= size)
					break;
				if (b[p] < 32 || b[p] > 126)
					printf("%c", '.');
				else
					printf("%c", b[p]);
			}
			printf("\n");
		}
	}
}
