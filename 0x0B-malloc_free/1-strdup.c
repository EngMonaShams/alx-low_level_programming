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

	if (*str == Null || *str == "")
		return (NULL);
	while (*str)
	{
		size++;
		str++;
	}

	m = malloc(size);
	while (size--)
	{
		str--;
		m[size] = *str;
	}
	return (m);
}
