#include "main.h"

/**
 * puts2 - a function that updates the value it points to to 98.
 *
 * @str : pointer to int
 *
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
		if (*str == '\0')
			break;
		str++;
	}
	putchar('\n');
}
