#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers.
 * @separator: The string.
 * @n: The number of integers.
 * Return: args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num = va_arg(args, int);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
