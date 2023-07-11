#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: void
 */

char *_strdup(char *str)
{
	char *out;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	out = malloc(sizeof(*str) * i);
	if (out == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		out[j] = str[j];
		j++;
	}
	return (out);
}
