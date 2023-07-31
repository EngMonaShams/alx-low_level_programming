#include "main.h"

/**
 * *_memset - a function that  fills memory with a constant byte.
 *
 * @s: pointer tomem
 * @b: data
 * @n: number of bytes
 *
 * Return : pointer m
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *m;

	m = s;
	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (m);
}
