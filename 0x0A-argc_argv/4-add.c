#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 *
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
	int s = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
			s = s + atoi(argv[argc]);
		}
	}
	printf("%d\n", s);
	return (0);
}
