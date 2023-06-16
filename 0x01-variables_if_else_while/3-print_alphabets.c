#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char h;

	for (h = 'a' ; h <= 'z' ; h++)
		putchar(h);
	for (h = 'A' ; h <= 'Z' ; h++)
		putchar(h);
	putchar('\n');
return (0);
}
