#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: void
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int m, n;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
				return (&s[m]);
		}
	}
	return ('\0');
}
