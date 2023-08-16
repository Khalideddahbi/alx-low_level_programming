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
	if (l < 0)
	{
		_putchar(l * 45);
		return (-l);
	}
	else
	{
		_putchar(l);
		return (l);
	}

}
