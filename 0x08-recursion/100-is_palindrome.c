#include "main.h"

/**
 * _strlen_recursion - a function that  prints a string length.
 *
 * @s: pointer to string
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * _is_pal - a function that check for palindrome string
 *
 * @s: string
 * @n: length
 *
 * Return: 1 (if palindrome)
 *         0 (otherwise)
 */
int _is_pal(char *s, int n)
{
	if (n <= 1)
		return (1);
	else if (s[0] == s[n - 1])
		return (_is_pal(s + 1, n - 2));
	else
		return (0);
}
/**
 *  is_palindrome - a function that check for palindrom
 *
 * @s: string
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int n;

	n = _strlen_recursion(s);
	return (_is_pal(s, n));
}
