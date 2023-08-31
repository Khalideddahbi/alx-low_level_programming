#include "main.h"

/**
 * _sqrt_recursion - entry
 * @n: num
 * @i: sqr
 * Return: root
 */
int sqt(int n, int i);
int _sqrt_recursion(int n)
{
	return (sqt(n, 1));
}

/**
 * sqt - helper
 * @n: num to discover
 * @i: sqr
 * Return: root
 */
int sqt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (sqt(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
