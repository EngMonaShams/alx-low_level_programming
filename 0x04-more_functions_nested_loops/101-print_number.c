#include "main.h"
#include <math.h>
/**
 * print_number - a function that prints the number
 *
 * @n: number to be printed
 */

void print_number(int n)
{
	int count = 0;
	int i, ch, ex, mod;

	do {
		n /= 10;
		++count;
	} while (n != 0);

	if (n < 0)
		_putchar('-');
	for (i = count; i > 0; --i)
	{
		ex = i;
		mod = 1;
		while (ex != 0)
		{
			mod *=10;
			ex--;
		}
		ch = n / mod;
		_putchar('0' + ch);
		n = n % mod;
	}
	_putchar('\n');
}
