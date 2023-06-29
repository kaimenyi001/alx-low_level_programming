#include "main.h"

/**
 * infinite_add - adds tow numbers
 * @n1: number
 * @n2: number
 * @r: buffer store
 * @size_r: buffer size
 * Return: void
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int m = 0, n = 0, p, l = 0, t, s, u = 0;

	while (n1[m] != '\0')
		m++;
	while (n2[n] != '\0')
		n++;
	if (m > n)
		l = m;
	else
		l = n;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (p = l - 1; p >= 0; p--)
	{
		m--;
		n--;
		if (m >= 0)
			t = n1[m] - '0';
		else
			t = 0;
		if (n >= 0)
			s = n2[n] - '0';
		else
			s = 0;
		r[p] = (t + s + u) % 10 + '0';
		u = (t + s + u) / 10;
	}
	if (u == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = u + '0';
	}
	return (r);
}
