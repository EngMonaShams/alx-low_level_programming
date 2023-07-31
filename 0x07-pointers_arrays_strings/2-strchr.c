#include "main.h"

/**
 * _strchr - a function that  fills memory with a constant byte.
 *
 * @s: pointer to string
 * @c: character
 *
 * Return: pointer to char
 */

char *_strchr(char *s, char c)
{
	int i, count = 0;
	char *ptr;

	ptr = s;
	while (*s)
	{
		count++;
		s++;
	}
	for (i = 0; i <= count ; i++)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
