#include "function_pointers.h"

/**
 * print_name - Prints a name using a function.
 * @name: A pointer to a character
 * @f: A pointer to a function
 * Return: void
 *
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

