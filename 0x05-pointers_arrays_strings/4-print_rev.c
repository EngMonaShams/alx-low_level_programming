#include "main.h"

/**
 * print_rev - a function that updates the value it points to to 98.
 *
 * @s : pointer to int
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	putchar('\n');
}
