#include "main.h"

/**
 * print_diagonal - a function that prints triangle
 *
 * @n : length
 */

void print_diagonal(int n)
{
	int sp, row;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= n; row++)
		{
			for (sp = 1; sp <= (row - 1); sp++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
