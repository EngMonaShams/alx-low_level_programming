#include "main.h"

/**
 * print_line - a function that prints the numbers, from 0 to 9
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
