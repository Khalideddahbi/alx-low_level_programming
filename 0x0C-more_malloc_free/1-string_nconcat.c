#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - entry
 * @s1: string one
 * @s2: second
 * @n: num
 * Return: Result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;

	if (n >= len_s2)
		n = len_s2;
	result = malloc(sizeof(char) * (len_s1 + n + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + n] = '\0';

	return (result);
}

