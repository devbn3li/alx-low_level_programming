#include "search_algos.h"
/**
  * _binary_search - Searches for a value in a sorted array
  *                  of integers using binary search
  * @array: ptr to first element of the array to search
  * @left: starting index of the [sub]array to search
  * @right: ending index of the [sub]array to search
  * @value: value to search for
  * Return: If value is not present or the array is NULL, -1
  *         Otherwise, the index where value is located
  * Description: Print the sub array being searched after each change
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (x = left; x < right; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = left + (right - left) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			right = x - 1;
		else
			left = x + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search
  * @array: ptr to first element of the array to search
  * @size: number of elements in the array
  * @value: value to search for
  * Return: If the value is not present or the array is NULL, -1
  *         Otherwise, the index where the value is located
  * Description: Prints a value every time it is compared in the array
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t x = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (x = 1; x < size && array[x] <= value; x = x * 2)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}

	right = x < size ? x : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", x / 2, right);
	return (_binary_search(array, x / 2, right, value));
}
