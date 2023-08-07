#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that  fills memory with a constant byte.
 *
 * @c: data
 * @size: number of bytes
 *
 * Return: pointer m
 */

char *create_array(unsigned int size, char c)
{
	char *m;

	m = malloc(size);
	if (size == 0 || m == 0)
		return (0);
	while (size--)
		m[size] = c;
	return (m);
}
