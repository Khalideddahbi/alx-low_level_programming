#include "main.h"

/**
 * swap_int - entry point
 * @a: first one
 * @b: second one
 *
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
