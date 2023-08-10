#include "main.h"
#include <stdlib.h>

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
	int *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = calloc(
	if (m == 0)
		exit(98);
	return (m);
}
