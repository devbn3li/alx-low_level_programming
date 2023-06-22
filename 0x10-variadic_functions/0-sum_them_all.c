#include "variadic_functions.h"
#include <stdarg.h>
/**
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	va_list Pn;
	va_start(Pn, n);
	if (n == 0)
	{
		return (0);
	}

	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(Pn, int);
	}
	va_end(Pn);
	return sum;
}
