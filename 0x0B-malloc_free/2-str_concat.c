#include "main.h"

/**
 * _strlen - lenght
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}
/**
 * *str_concat - entry
 *
 * @s1: strg 1
 * @s2: strg 2
 *
 * Return: result
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; j < len2; j++)
		p[i + j] = s2[j];

	p[i + j] = '\0';
	return (p);
}
