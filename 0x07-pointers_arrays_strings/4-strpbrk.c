#include "main.h"

/**
 * _strpbrk - a function that gets the length of a prefix substring.
 *
 * @s: pointer to string
 * @accept: string of character
 *
 * Return: pointer of char
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	ptr = accept;
	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		accept = ptr;
		s++;
	}
	return (NULL);
}
