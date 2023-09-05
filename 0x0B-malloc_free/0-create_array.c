#include "main.h"
#include <stdlib.h>

/**
 * *create_array - entry
 * @size: size of
 * @c: char
 * Return: size
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

