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
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	printf("%d\n", i);
	for (i /= 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
