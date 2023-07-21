#include "main.h"

/**
 * print_line - a function that prints line
 *
 * @n : number of lines
 */

void print_line(int n)
{
	int row;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= n; row++)
			_putchar('_');
		_putchar('\n');
	}
}
