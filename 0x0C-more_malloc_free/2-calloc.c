#include "main.h"
#include <stdlib.h>

/**
 * _memset - a function that ...
 *
 * @ptr: pointer to mem
 * @b: set byte
 * @count: number of bytes
 *
 * Return: pointer m
 */

void *_memset(char *ptr, char b, int count)
{
	char *s;

	s = ptr;
	while (count--)
		*s++ = b;
	return (ptr);
}


/**
 * _calloc - a function that ...
 *
 * @nmemb: number of elements
 * @size: size of 1 element
 *
 * Return: pointer m
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == 0)
		return (NULL);
	_memset(m, 0, nmemb * size);
	return (m);
}
