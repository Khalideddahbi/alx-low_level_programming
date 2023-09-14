#include "3-calc.h"

/**
 * op_add - Returns the sum
 * @a: The first
 * @b: The second
 * Return: The sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference
 * @a: The first
 * @b: The second
 * Return: The difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product
 * @a: The first int
 * @b: The second int
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division
 * @a: The first int
 * @b: The second int
 * Return: The result of the division
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
 * op_mod - Returns the remainder of the div
 * @a: The first int
 * @b: The second int
 * Return: The remainder of the division of a by b
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
