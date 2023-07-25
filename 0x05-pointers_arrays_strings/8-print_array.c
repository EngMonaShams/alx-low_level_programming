#include "main.h"

/**
 * print_array - a function that prints array
 *
 * @n : number of elements
 * @a : pointer
 *
 */

void print_array(int *a, int n)
{
	int i;

	printf("%d", *a);
	for(i = 1; i < n; i++)
	{
		a++;
		printf(", %d", *a);
	}
	printf("\n");
}
