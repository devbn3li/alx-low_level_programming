#include "variadic_functions.h"
#include <stdarg.h>
/**
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int x;
	int num[n];

	va_list Pn;
	va_start(Pn, n);
	va_arg(Pn, int);
	if (n == 0)
	{
		return (0);
	}

	for (x = 0; x < n; x++)
	{
		num[0] + num[x];
	}
	va_end(Pn);
}
