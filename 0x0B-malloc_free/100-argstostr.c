#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer value
 * @av: string value
 * Return: void
 */

char *argstostr(int ac, char **av)
{
	char *out;
	int i, j, k, f;

	if (ac == 0)
		return (NULL);
	for (i = j = 0; j < ac; j++)
	{
		if (av[j] == NULL)
			return (NULL);
		for (k = 0; av[j][k] != '\0'; k++)
			i++;
		i++;
	}
	out = malloc((i + 1) * sizeof(char));
	if (out == NULL)
	{
		free(out);
		return (NULL);
	}
	for (j = k = f = 0; f < i; k++, f++)
	{
		if (av[j][k] == '\0')
		{
			out[f] = '\n';
			j++;
			f++;
			k = 0;
		}
		if (f < i - 1)
			out[f] = av[j][k];
	}
	out[f] = '\0';
	return (out);
}
