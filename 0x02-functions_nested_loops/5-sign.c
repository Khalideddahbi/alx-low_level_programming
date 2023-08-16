
#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: take a sign
 *
 * Return: if positif 1 or its 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
