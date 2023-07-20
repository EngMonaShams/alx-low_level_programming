#include "main.h"

/**
 * more_numbers - a function that prints the numbers, from 0 to 9
 */

void more_numbers(void)
{
	int i, j, n;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			n = i;
			if (i > 9)
			{
				_putchar(49);
				n = i % 10;
			}
		_putchar('0' + n);
		}
	_putchar('\n');
	}
}
