#include "search_algos.h"
#include <stddef.h>

/**
* linear_search - Search for a value in an array using linear search algo
* @array: Ptr to first element of the array to search
* @size: Number of elements in the array
* @value: The value to search for
* Return: first index where @value is located, or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);

		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);

}
