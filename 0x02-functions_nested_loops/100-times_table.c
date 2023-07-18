#include "main.h"

/**
 * print_times_table - a prototype that prints the n times table
 *
 * @n:number of tables
 */

void print_times_table(int n)
{
	int pr, t, k;

	if (n <= 12)
	{
		for (t = 0; t <= n; t++)
		{
			_putchar(48);
			for (k = 1; k <= n; k++)
			{
				_putchar(',');
				_putchar(' ');
				pr = n * t;
				if (pr / 10 == 0)
					_putchar(' ');
				else
					_putchar('0' + pr / 10);
				_putchar('0' + pr % 10);
			}
		_putchar('\n');
		}
	}
}
