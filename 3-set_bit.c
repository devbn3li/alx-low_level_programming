#include "main.h"
/**
 * set_bit - sets value of bit to 1 at given index.
 * @n: unsigned long to change.
 * @index: change to one
 * Return: 1 if it worked , -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
