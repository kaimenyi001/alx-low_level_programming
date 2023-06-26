#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer one
 * @b: integer two
 */

void swap_int(int *a, int *b)
{
	int k = *a;
	*a = *b;
	*b = k;
}
