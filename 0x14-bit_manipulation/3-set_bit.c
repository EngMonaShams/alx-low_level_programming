#include "main.h"
/**
 * set_bit -  a function that returns the value of a bit at a given index.
 *
 * @n: int
 * @index: index
 *
 * Return: bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= mask;
	return (1);
}

