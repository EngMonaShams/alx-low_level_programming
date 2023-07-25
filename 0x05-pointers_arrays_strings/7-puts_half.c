#include "main.h"
#include <stdio.h>

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
	printf("%d\n", i);
	j = (i + 1) / 2;
	str = j;
	while (str[j] != '\0')
	{
		_putchar(*str);
		j++;
		str++;
	}
	putchar('\n');
}
