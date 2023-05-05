#include "main.h"
/**
 * set_bit - func set the value of a bit to 1 at a given index
 * @n: num
 * @index: index bit to set starting from 0
 *
 * Return: 1 if it worked | -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n | (1UL << index);
	return (1);
}
