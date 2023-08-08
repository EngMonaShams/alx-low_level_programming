#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that  fills memory with a constant byte.
 *
 * @str: data
 *
 * Return: pointer m
 */

char *_strdup(char *str)
{
	char *m;
	int size = 0;

	while (*str)
	{
		size++;
		str++;
	}
	if (size == 0)
		return (NULL);
	m = malloc(size * sizeof(str) + 1);
	if (m == 0)
		return (NULL);

	while (size--)
	{
		str--;
		m[size] = *str;
	}
	return (m);
}
