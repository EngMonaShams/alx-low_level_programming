#include "main.h"

/**
 *  reverse_array- a function that reverse array.
 *
 * @a : pointer to array
 * @n : pointer to number of elements
 *
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - i - 1] = temp;
	}

}
