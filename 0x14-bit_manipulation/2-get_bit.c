#include "main.h"
/**
 * get_bit - return the value of a bit at a given index
 * @n: number to get the bit from
 * @index: index of the bit to get
 *
 * Return: the value of the bit at index 'index', or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index > 64)
		return (-1);
	num = n >> index;
	return (num & 1);
}
