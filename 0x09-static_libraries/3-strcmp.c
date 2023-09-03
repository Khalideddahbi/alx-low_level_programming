#include "main.h"

/**
 * _strcmp - entry
 *
 * @s1: first
 * @s2: second
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return ((int)(*s1 - *s2));
}
