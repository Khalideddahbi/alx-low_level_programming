#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory
 * @ptr: A pointer to the previously allocated memory
 * @old_size: The size, in bytes
 * @new_size: The new size
 *
 * Return: (Success) A pointer to the newly allocated memory block.
 *         (Failure) NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;
	char *src, *dest;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	min_size = (old_size < new_size) ? old_size : new_size;

	src = (char *)ptr;
	dest = (char *)new_ptr;

	for (i = 0; i < min_size; i++)
		dest[i] = src[i];

	free(ptr);

	return (new_ptr);
}

