#include "main.h"

/**
 * is_prime_number - entry
 *
 * @n: num
 * @i: diviser
 *
 * Return: prime or not
 */
int prime_div(int n, int i);
int is_prime_number(int n)
{
	return (prime_div(n, 2));
}

/**
 * prime_div - div
 *
 * @n: num
 * @i: diviser
 *
 * Return: first call
 */
int prime_div(int n, int i)
{
	if (i >= n && n > 1)
	{
		return (1);
	}
	else if (n % i == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_div(n, i + 1));
	}
}
