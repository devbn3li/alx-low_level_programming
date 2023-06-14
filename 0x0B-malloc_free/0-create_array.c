#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - an array of chars, and initializes it with a specific char
 * @size: the size
 * @c: character
 * Return: if size 0 Null , ptr to array if success
 */
char *create_array(unsigned int size, char c)
{
	size_t i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
