#include "main.h"

/**
 * _puts - entry point
 *
 * @str: string
 *
 * Return: always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
