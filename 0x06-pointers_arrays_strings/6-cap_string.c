#include "main.h"

/**
 * cap_string - capitalizes
 * @s: array
 * Return: void
 */

char *cap_string(char *s)
{
	int n = 0, i;
	int sepera[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] = s[0] - 32;
	}
	while (s[n] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (s[n] == sepera[i])
			{
				if ((s[n] + 1) >= 97 && (s[n] + 1) <= 122)
					(s[n] + 1) = (s[n] + 1) - 32;
				break;
			}
		}
		n++;
	}
	return (s);
}
