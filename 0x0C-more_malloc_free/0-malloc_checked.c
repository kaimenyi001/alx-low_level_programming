#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer value
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *k;

	k = malloc(b);
	if (k == NULL)
		exit(98);
	return (k);
}
