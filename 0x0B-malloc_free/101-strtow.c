#include "main.h"
#include <stdlib.h>

/**
 * _free_grid - frees array
 * @grid: array of char
 * @height: height of array
 * Return: void
 */

void _free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * @str: array
 * Return: void
 */

char **strtow(char *str)
{
	char **out;
	unsigned int i, height, x, y, z;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = height = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			height++;
	out = malloc((height + 1) * sizeof(char *));
	if (out == NULL || height == 0)
	{
		free(out);
		return (NULL);
	}
	for (x = z = 0; x < height; x++)
	{
		for (i = z; str[i] != '\0'; i++)
		{
			if (str[i] == ' ')
				z++;
			if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			{
				out[x] = malloc((i - z + 2) * sizeof(char));
				if (out[x] == NULL)
				{
					_free_grid(out, x);
					return (NULL);
				}
				break;
			}
		}
		for (y = 0; z <= i; z++, y++)
			out[x][y] = str[z];
		out[x][y] = '\0';
	}
	out[x] = NULL;
	return (out);
}
