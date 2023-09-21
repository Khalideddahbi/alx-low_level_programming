#include "lists.h"

/**
 * print_number - Prints an int
 * @n: The integer
 * Return: void
 */
void print_number(size_t n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
/**
 * print_list - Prints elements
 * @h: the head
 *
 * Return: nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		if (h->str == NULL)
			_putchar('['), _putchar('0'), _putchar(']'), _putchar(' '), _putchar('('), _putchar('n'), _putchar('i'), _putchar('l'), _putchar(')'), _putchar('\n');
		else
		{
			size_t len = h->len;
			char *str = h->str;
			while (*str)
				_putchar(*str++);
			_putchar('[');
			print_number(len);
			_putchar(']');
			_putchar(' ');
			_putchar('\n');
		}
		count++;
		h = h->next;
	}
	return (count);
}
