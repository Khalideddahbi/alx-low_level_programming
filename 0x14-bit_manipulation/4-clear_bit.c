#include "main.h"

/**
 * clear_bit - entry
 * @n: num
 * @index: The index
 * Return: 1 or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
