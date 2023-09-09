#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - entry
 * @nmemb: char
 * @size: size of it
 * Return: result
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *byte_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	byte_ptr = (char *)ptr;
	for (i = 0; i < (nmemb * size); i++)
	{
		byte_ptr[i] = 0;
	}
	return (ptr);
}
