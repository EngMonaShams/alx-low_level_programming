#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that ...
 *
 * @b: input
 *
 * Return: pointer m
 */

void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);
	if (m == 0)
		exit(98);
	return (m);
}
