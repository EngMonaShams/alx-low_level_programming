#include "main.h"

/**
 * _puts - a function that updates the value it points to to 98.
 *
 * @str : pointer to int
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
