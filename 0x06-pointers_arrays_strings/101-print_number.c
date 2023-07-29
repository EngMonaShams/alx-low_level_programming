#include "main.h"

/**
 * print_number - a function that concatenates two strings.
 *
 * @n : intger
 *
 */

void print_number(int n)
{
	int r, exp = 1, q;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	q = n;
	while (q >= 10)
	{
		q /= 10;
		exp *= 10;
	}
	while (n >= 10)
	{
		r = n / exp;
		_putchar('0' + r);
		n %= exp;
		exp /= 10;
	}
	_putchar('0' + n);
}
