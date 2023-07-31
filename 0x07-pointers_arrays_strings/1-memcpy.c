#include "main.h"

/**
 * _memcpy - a function that  fills memory with a constant byte.
 *
 * @src: pointer to dest mem
 * @dest: pointer to src mem
 * @n: number of bytes
 *
 * Return: pointer m
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *m;

	m = dest;
	for (i = 0; i < n; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (m);
}
