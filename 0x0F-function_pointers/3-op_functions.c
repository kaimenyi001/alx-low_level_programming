#include "3-calc.h"

/**
 * op_add - adds numbers
 * @a: no 1
 * @b: no 2
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts
 * @a: no 1
 * @b: no 2
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: no1
 * @b: no2
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 * @a: no1
 * @b: no2
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculats module
 * @a: no1
 * @b: no2
 * Return: modulo
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
