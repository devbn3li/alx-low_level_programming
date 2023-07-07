#include "main.h"
/**
 * get_bit - return value of bit at given index
 * @n: unsigned long int to search.
 * @index: index to return.
 * Return: value of bit at index, -1 error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);
	return ((n >> index) & 1);
}
