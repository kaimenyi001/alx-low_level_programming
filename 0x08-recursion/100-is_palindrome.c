#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string value
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palind - checks two chars
 * @s: string value
 * @m: integer
 * @n: integer
 * Return: void
 */

int is_palind(char *s, int m, int n)
{
	if (m == n)
		return (1);
	else if (m == n - 1)
		return (s[m] == s[n]);
	else if (s[m] != s[n])
		return (0);
	return (is_palind(s, m + 1, n - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string
 * Return:void
 */

int is_palindrome(char *s)
{
	int k;

	k = _strlen_recursion(s);
	if (k == 0 || *s != s[k - 1])
		return (0);
	return (is_palind(s, 0, k - 1));
}

