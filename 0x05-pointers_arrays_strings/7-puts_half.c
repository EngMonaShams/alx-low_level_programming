#include "main.h"

/**
 * puts_half - a function that updates the value it points to to 98.
 *
 * @str : pointer to int
 *
 */

void puts_half(char *str)
{
	int i = 0, j;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	if (i % 2 == 1)
		j = (i - 1) / 2;
	else
		j = i / 2;
	str -= j;
	while (j < i)
	{
		_putchar(*str);
		j++;
		str++;
	}
	putchar('\n');
}
