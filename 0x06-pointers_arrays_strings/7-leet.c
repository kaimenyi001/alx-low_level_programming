#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: array
 * Return: void
 */

char *leet(char *s)
{
	int m, n;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (s[m] == s1[n])
			{
				s[m] = s2[n];
			}
		}
	}
	return (n);
}
