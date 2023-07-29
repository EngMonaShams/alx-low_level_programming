#include "main.h"

/**
 * print_number - a function that concatenates two strings.
 *
 * @n : intger
 *
 */

void print_number(int n)
{
	int r, q, check;
	int exp = 1;

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
	while (n >= 10 && exp >= 10)
	{
		r = n / exp;
		_putchar('0' + r);
		check = n / (exp / 10);
		while (check % 10 == 0 && exp >= 100)
		{
			_putchar('0');
			exp /= 10;
			check = n / (exp / 10);
		}
		n %= exp;
		exp /= 10;
	}
	_putchar('0' + n);
}
