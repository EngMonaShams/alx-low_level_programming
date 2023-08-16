#include "function_pointers.h"

/**
 * array_iterator - a function that  executes a function given as a parameter
 *
 * @array: pointer to array
 * @size: int
 * @action: pointer to func
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1;

	if (array && size && action)
		while (array <= last)
			action(*array++);
}
