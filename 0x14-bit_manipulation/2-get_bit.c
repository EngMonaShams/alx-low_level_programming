#include "main.h"
/**
 * get_bit -  a function that returns the value of a bit at a given index.
 *
 * @n: int
 * @index: index
 *
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n & mask) >> index);
}

