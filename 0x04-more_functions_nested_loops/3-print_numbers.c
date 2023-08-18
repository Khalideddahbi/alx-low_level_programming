#include "main.h"

/**
 * print_numbers - entry
 *
 * Return: always 0
 */

void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
