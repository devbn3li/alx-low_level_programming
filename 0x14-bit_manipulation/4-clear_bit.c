#include "main.h"
/**
 * clear_bit - set the value of a bit to 0.
 * @n: ptr to num
 * @index: index of the bit to clear
 *
 * Return: 1 if it worked | -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}
