#include "main.h"

/**
 * _strlen - entry point
 *
 * @s: lenght
 *
 * Return: always 0
 */

int _strlen(char *s)
{
	int lenght;

	for (lenght = 0; *s != '\0'; s++)
		lenght++;
	return (lenght);
}
