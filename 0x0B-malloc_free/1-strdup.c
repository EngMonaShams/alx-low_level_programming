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
	int size = 0, i;

	for (i = 0; str[size] != '\0'; size++)
		;
	if (str == NULL)
		return (NULL);
	else
	{
		m = malloc(size + 1);
		if (m == 0)
			return (NULL);
		for (i = 0; i < size; i++)
			m[i] = str[i];
		return (m);
	}
}
