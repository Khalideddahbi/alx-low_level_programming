#include "main.h"

/**
 * *_strcpy - entry
 *
 * @dest: last one
 * @src: first one
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
