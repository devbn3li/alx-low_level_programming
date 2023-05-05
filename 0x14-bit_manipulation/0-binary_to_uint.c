#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: const char
 *
 * Return: converted num | 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result =  0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = result * 2 + (b[i] - '0');
	}
	return (result);
}
