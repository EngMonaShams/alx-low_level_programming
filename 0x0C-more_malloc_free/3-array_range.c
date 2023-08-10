#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that ...
 *
 * @min: number of elements
 * @max: size of 1 element
 *
 * Return: pointer m
 */

int *array_range(int min, int max)
{
	int *m;
	int len, i;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	m = malloc(len * sizeof(int));
	if (m == 0)
		return (NULL);
	for (i = 0; i < len; i++)
		m[i] = min++;
	return (m);
}
