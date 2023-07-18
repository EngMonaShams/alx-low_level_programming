#include "main.h"

/**
 * _abs - a prototype that returns absolute value
 *
 *@n: input of function
 *
 * Return: n (positive number)
 *         0 (zero)
 *         -n (negative)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
