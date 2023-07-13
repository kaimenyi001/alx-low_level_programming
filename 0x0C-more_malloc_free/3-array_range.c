#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: void
 */

int *array_range(int min, int max)
{
	int i, *m;

	if (min > max)
		return (NULL);
	m = malloc(sizeof(*m) * ((max - min) + 1));
	if (m == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		m[i] = min;
	return (m);
}
