#include "main.h"
/**
 * flip_bits - unction that returns the number of different bits
 *
 * @n: integer
 * @m: integer
 *
 * Return: number of different bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		if (xor_result & 1)
			count++;
	xor_result >>= 1;
	}
	return (count);
}
