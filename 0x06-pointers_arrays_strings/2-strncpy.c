#include "main.h"

/**
 * *_strncpy - entry
 *
 * @dest: destination
 * @src: source
 * @n: num
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*p = *src;
		p++;
		src++;
	}
	while (i < n)
	{
		*p = '\0';
		p++;
		i++;
	}

	return (dest);
}
