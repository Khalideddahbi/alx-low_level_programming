#include "main.h"

/**
 * *rot13 - entry point
 *
 * @s: string
 *
 * Return: encode string
 */

char *rot13(char *s)
{
	int i;
	char rot[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = s;

	while (*s)
	{
		for (i =0; i <= 52; i++)
		{
			if (*s == rot[i])
			{
				*s = ROT[i];
				break;
			}
		}
		s++;
	}
	return (p);
}
