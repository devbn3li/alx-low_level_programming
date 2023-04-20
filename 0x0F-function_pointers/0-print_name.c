#include <stdio.h>
/**
 * print_name - function thats prints a name.
 * @name: char to display to the stdout
 * @f: A pointer function
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
