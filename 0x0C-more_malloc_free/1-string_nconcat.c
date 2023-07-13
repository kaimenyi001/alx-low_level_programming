#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: length of string
 * Return: void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *out;
	unsigned int y;
	int x = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	out = malloc(sizeof(char) * (x + n + 1));
	if (out == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		out[x] = s1[x];
		x++;
	}
	while (y < n && s2[y] != '\0')
	{
		out[x] = s2[y];
		x++, y++;
	}
	out[x] = '\0';
	return (out);
}
