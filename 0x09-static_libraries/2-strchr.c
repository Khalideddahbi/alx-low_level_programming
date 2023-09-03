#include "main.h"
#include <stddef.h>
/**
 * *_strchr - entry
 *
 * @s: pointer
 * @c: character
 *
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
