#include "main.h"

/**
 * rev_string - reverses a string
 * @s: inputs string
 */

void rev_string(char *s)
{
	int k = 0;
	int l = 0;
	char *y = s;
	int m = 0;
	int n;
	char x;

	while (*y != '\0')
	{
		y++;
		k++;
	}
	l = k - 1;
	for (; m < ((l / 2) + 1); m++)
	{
		n = (l - m);
		x = s[m];
		s[m] = s[n];
		s[n] = x;
	}
}
