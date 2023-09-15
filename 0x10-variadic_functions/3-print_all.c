#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: A format string.
 * Return: anything
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	int separator = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (separator)
			printf(", ");
		separator = 1;

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;

			case 'i':
				printf("%d", va_arg(args, int));
				break;

			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;

			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				separator = 0;
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
