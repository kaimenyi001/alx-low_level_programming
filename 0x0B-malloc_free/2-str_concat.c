#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: void
 */

char *str_concat(char *s1, char *s2)
{
	char *out;
	unsigned int x, y, z, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	out = malloc(sizeof(char) * (x + y + 1));

	if (out == NULL)
	{
		free(out);
		return (NULL);
	}
	for (y = 0; y < i; y++)
		out[y] = s1[y];

	limit = y;
	for (z = 0; z <= limit; y++, z++)
		out[y] = s2[z];

	return (out);
}
