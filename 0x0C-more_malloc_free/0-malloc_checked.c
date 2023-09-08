#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - entry
 * @b: num
 * Return: 98 if fails
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

