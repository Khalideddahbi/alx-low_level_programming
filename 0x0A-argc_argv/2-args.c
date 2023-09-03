#include <stdio.h>
/**
 * main - entry
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
