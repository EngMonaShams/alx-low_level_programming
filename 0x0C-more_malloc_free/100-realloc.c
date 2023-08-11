#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that ...
 *
 * @ptr: pointer
 * @old_size: size of ptr
 * @new_size: size of p
 *
 * Return: pointer p
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == 0)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == 0)
			return (NULL);
		for (i = 0; i < old_size; i++)
			*((char *)p + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (p);
}
