#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry
 * @argc: count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *operator = argv[2];
	int (*operation)(int, int) = get_op_func(operator);
	int result = operation(num1, num2);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (!operation)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", result);
	return (0);
}
