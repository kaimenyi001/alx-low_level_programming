#include "main.h"

/**
 * create_array -  creates an array of chars
 * @size: size of the array
 * @c: character
 * Return: void
 */

char *create_array(unsigned int size, char c)
{
	char *xyz;
	unsigned int i;

	if (size == 0)
		return (NULL);

	xyz = malloc(sizeof(c) * size);
	if (xyz == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		xyz[i] = c;

	return (xyz);
}
