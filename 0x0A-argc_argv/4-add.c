#include <stdio.h>
#include <stdlib.h>
/**
 * is_positive_integer - entr
 * @str: check
 * Return: 0 or 1
 */
int is_positive_integer(const char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

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
	int sum = 0;
	int num;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!is_positive_integer(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(argv[i]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
