#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer
 * @accept: array
 * Return: void
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, n, p;

	for (m = 0; s[m] != '\0'; m++)
	{
		p = 1;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
			{
				p = 0;
				break;
			}
		}
		if (p == 1)
			break;
	}
	return (m);
}
