#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - A function bgb
 * @b: integer varis
 * Return: 0 means program wasn
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
