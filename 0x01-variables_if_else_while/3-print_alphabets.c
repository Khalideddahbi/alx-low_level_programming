#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char sd = 'a';
	char bd = 'A';

	for (sd = 'a'; sd <= 'z'; sd++)
		putchar(sd);

	for (bd = 'A'; bd <= 'Z'; bd++)
		putchar(bd);

	putchar('\n');

	return (0);
}
