#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a prototype that prints natural numbers
 *
 *@n: input of function
 *
 */

void print_to_98(int n)
{
	int k;

	if (n < 98)
	{
		for (k = n; k < 98; k++)
			printf("%d, ", k);
	}
	if (n > 98)
	{
		for (k = n; k > 98; k--)
			printf("%d, ", k);
	}
	printf("%d\n", 98);


}
