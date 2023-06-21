#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function print name
 * @name: string
 * @f: ptr fun
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{

	if (!name || !f)
		/* if any is NULL */
		return;
	f(name);
}
