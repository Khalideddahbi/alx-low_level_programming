#include "main.h"

/**
 * rev_string - entry
 *
 * @s: string
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int l, i;
	char t;

	for (l = 0; s[l] != '\0'; l++)
		;

	for (i = 0; i < l / 2; i++)
	{
		t = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = t;
	}
}
