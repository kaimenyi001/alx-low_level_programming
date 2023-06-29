#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string one
 * @src: string two
 * @n: max size
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
