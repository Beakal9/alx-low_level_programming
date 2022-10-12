#include "3-calc.h"
/**
 * op_add - return sum of 2 nums
 * @a: integer
 * @b: integer
 *
 * Return: sum,
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return diff of 2 nums
 * @a: integer
 * @b: integer
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns pruducts of 2 nums
 * @a: integer
 * @b: integer
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return quotient of 2 nums
 * @a: integer
 * @b: integer
 *
 * Return: quotient.
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
 * op_mod - returns the remainder of div
 * @a: integer
 * @b: integer
 *
 * Return: remainder
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
