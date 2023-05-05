#include "main.h"
/**
 * print_binary - Prints the binary representation of a num.
 * @n: number to binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int i = 0;

	if (n == 0)
		_putchar('0');

	while (num > 0)
	{
		if ((n & num) == num)
		{
			_putchar('1');
			i = 1;
		}
		else if (i)
			_putchar('0');

		num = num >> 1;
	}

}
