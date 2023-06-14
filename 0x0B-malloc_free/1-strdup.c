#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function return copy of string
 * @str: string will be copied
 * Return: copied string
 */
char *_strdup(char *str)
{
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	copy = malloc(sizeof(str) + 1);
	for (int i = 0; i < sizeof(str) + 1; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
