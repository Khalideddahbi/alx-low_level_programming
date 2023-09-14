#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: The array
 * @size: The number of elements
 * @cmp: A pointer
 *
 * Return: Index of the first element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
