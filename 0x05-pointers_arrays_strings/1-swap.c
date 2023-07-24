#include "main.h"

/**
 *  swap_int - a function that updates the value it points to to 98.
 *
 * @a : pointer to int a
 * @b : pointer to int b
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
