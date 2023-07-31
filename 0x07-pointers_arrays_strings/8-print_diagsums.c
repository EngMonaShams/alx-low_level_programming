#include "main.h"

/**
 * print_diagsums - a function that  fills memory with a constant byte.
 *
 * @a: pointer to array
 * @size: size of array
 *
 */

void print_diagsums(int *a, int size)
{
	int row;
	int sum1 = 0, sum2 = 0;

	for (row = 0; row < size; row++)
	{
		sum1 += a[row];
		sum2 += a[size - row - 1];
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
