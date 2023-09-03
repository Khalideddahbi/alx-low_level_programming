#include "main.h"

/**
 * _isdigit - entry point
 *
 * @c: input for degit
 *
 * Return: 1 if degit, 0 if else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
