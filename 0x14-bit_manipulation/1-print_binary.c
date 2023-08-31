#include "main.h"

/**
 * print_binary - a function that prints the binary representation
 *
 * @n: integer
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n >= (mask << 1))
		mask <<= 1;
	while (mask)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
