#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @i: the integer
 *
 * Return: the absulote value
 */
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (i < 0)
	{
		l = -1 * (i % 10);
	}
	else
	{
		l = i % 10;
	}
	_putchar(l + 48);
	return (l);
}
