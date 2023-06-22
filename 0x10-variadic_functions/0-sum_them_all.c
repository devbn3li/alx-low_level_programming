#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - main
 * @n: arg count
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list Pn;
	unsigned int i;
	int sum = 0;

	va_start(Pn, n);
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(Pn, int);
	}
	va_end(Pn);
	return (sum);
}
