#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 *
 * @n: number of parms
 * @separator: pointer to string
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);

	while (i--)
	{
		printf("%d%s", va_arg(ap, int),
			i ? (separator ? separator : "") : "\n");
	}
	va_end(ap);
}
