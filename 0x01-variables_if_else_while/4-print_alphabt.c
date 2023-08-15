#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char sd = 'a';

	while (sd <= 'z')
	{
		if (sd == 'e' || sd == 'q')
			sd++;
		putchar(sd);
		sd++;
	}
	putchar('\n');

	return (0);
