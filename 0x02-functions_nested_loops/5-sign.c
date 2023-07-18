#include "main.h"

/**
 * print_sign - a prototype that prints sign of a number
 *
 *@n: check input of function
 *
 * Return: 1 (positive number)
 *         0 (zero)
 *         -1 (negative)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
