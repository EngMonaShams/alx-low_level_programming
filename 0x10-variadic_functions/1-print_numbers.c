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
	unsigned int i;
	const char *p;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		p = separator;
		while (*p && (i != n - 1))
		{
			printf("%c", *p);
			p++;
		}
	}
	printf("\n");
	va_end(ap);
}
