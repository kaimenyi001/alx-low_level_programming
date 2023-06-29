#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string one
 * @src: string two
 * @n: integer value
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int m = 0, k = 0;

	while (dest[m] != '\0')
	{
		m++;
	}
	while (k < n && src[k] != '\0')
	{
		dest[m] = src[k];
		m++;
		k++;
	}
	dest[m] = '\0';
	return (dest);
}
