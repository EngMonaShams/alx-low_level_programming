#include "main.h"

/** print_binary - a function that prints the binary representation
 *
 * @n: integer
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8 , pr = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			pr++;
		}
		else if (pr)
			_putchar('0');
	}
	if (!pr)
		_putchar('0');
}
