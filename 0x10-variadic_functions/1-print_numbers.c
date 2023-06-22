#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function print numbers
 * @separator: comma
 * @int: number count
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(valist, unsigned int), separator);
	}
	printf("\n");
}
