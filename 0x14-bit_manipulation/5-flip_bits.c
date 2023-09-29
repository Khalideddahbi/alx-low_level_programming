#include "main.h"

/**
 * flip_bits - entry
 * @n: first num
 * @m: second num
 * Return: flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int flip = 0;

	while (xor > 0)
	{
		flip += xor & 1;
		xor >>= 1;
	}
	return (flip);
}
