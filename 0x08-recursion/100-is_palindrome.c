#include "main.h"

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
	int n = 0;

	while (*s)
	{
		n++;
		s++;
	}
	return (_is_pal(s - n, n));
}
