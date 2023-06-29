#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: no of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int m, k;

	for (m = 0; m < n--; m++)
	{
		k = a[m];
		a[m] = a[n];
		a[n] = k;
	}
}
