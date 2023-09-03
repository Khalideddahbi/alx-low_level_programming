#include "main.h"

/**
 * _isupper - entry point
 *
 * @c: the alphabet
 *
 * Return: 1 if upper, else o
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

