#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: array
 * @size: size of the passed array to function
 * @action: func
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
