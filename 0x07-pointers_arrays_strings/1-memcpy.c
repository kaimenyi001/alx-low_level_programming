#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: bytes
 * Return: void
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
		src[i] = dest;
	return (dest);
}
