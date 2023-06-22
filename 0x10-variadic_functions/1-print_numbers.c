#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function print numbers
 * @separator: comma
 * @n: number count
 * Return: void
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
		unsigned int num = va_arg(valist, unsigned int);
		if (i == n - 1)
		{
			printf("%d", num);
		}
		else
		{
			printf("%d%s", num, separator);
		}
	}
	printf("\n");
	va_end(valist);
}
