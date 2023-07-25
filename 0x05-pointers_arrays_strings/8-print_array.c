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
	int i = 1;

	while (i <= n)
	{
		printf("%d", *a);
		if (i == n)
			break;
		printf(", ");
		a++;
		i++;
	}
	printf("\n");
}
