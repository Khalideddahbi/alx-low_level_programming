#include "main.h"

/**
 * is_palindrome - entry
 *
 * @s: string
 *
 * Return: palindrome or not
 */
int _strlen_(char *s);
int is_palindrome_rec(char *s, int b, int e);
int is_palindrome(char *s)
{
	int l = _strlen_(s);

	if (l <= 1)
	{
		return (1);
	}

	return (is_palindrome_rec(s, 0, l - 1));
}
/**
 * is_palindrome_rec - called one
 *
 * @s: string
 * @b: begining
 * @e: end
 *
 * Return: 1 or 0
 */
int is_palindrome_rec(char *s, int b, int e)
{
	if (b >= e)
	{
		return (1);
	}
	else if (s[b] != s[e])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_rec(s, b + 1, e - 1));
	}
}

/**
 * _strlen_ - calculang lenght
 * @s: string
 *
 * Return: lenght
 */

int _strlen_(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
