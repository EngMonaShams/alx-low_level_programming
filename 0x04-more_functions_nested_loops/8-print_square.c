#include "main.h"

/**
 * print_square - a function that prints a square
 *
 * @size: square dimension
 *
 */

void print_square(int size)
{
	int l, w;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (l = 0; l < size; l++)
		{
			for (w = 0; w < size; w++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
