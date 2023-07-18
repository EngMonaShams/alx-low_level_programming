#include "main.h"

/**
 * print_times_table - a prototype that prints the n times table
 *
 * @n:number of tables
 */

void print_times_table(int n)
{
	int pr, t, k;

	if (n <= 15 && n >= 0)
	{
		for (t = 0; t <= n; t++)
		{
			_putchar(48);
			for (k = 1; k <= n; k++)
			{
				_putchar(',');
				_putchar(' ');
				pr = k * t;
				if (pr < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (pr < 100)
				{
					_putchar(' ');
					_putchar('0' + pr / 10);
				}
				else
				{
					_putchar('0' + pr / 100);
					_putchar('0' + (pr / 10) % 10);
				}
				_putchar('0' + pr % 10);
			}
		_putchar('\n');
		}
	}
}
