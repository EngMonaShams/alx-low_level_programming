#include "main.h"

/**
 * print_diagonal - a function that prints the numbers, from 0 to 9
 *
 * @n : number of lines
 */

void print_diagonal(int n)
{
	int line, sp;

	if (n > 0)
	{
		for (line = 1; line <= n; line++)
		{
			for (sp = 1; sp <= line; sp++)
				_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
