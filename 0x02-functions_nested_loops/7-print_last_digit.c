#include "main.h"

/**
 * print_last_digit - a prototype that prints last digit
 *
 *@i: input of function
 *
 * Return: i
 */

int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
		i = i * -1;
	_putchar('0' + i);
	return (i);
}
