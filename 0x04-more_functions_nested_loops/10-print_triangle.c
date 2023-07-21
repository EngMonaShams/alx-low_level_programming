#include "main.h"

/**
 * print_triangle - a function that prints triangle
 *
 * @size : length
 */

void print_triangle(int size)
{
	int sp, row, t;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (sp = 1; sp <= (size - row); sp++)
				_putchar(' ');
			for (t = 1; t <= row; t++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
