#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function
 * @array: The array
 * @size: The size
 * @action: A pointer to the function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *p = array + size - 1;

	if (array && size && action)
		while (array <= p)
			action(*array++);
}
