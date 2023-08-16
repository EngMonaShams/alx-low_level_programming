#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: pointer to array
 * @size: int
 * @cmp: pointer to func
 *
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size > 0 && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
