#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 *
 * @n: number of parms
 * @separator: pointer to string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = n;
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
	{
		str = va_arg(ap, char *);
		printf("%s%s", (str ? str : "(nil)"),
			       i ? (separator ? separator : "") : "\n");
	}
	va_end(ap);
}
