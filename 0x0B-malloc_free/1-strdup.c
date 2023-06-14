#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function return copy of string
 * @str: string will be copied
 * Return: copied string
 */
char *_strdup(char *str)
{
	int i;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	copy = malloc(strlen(str) + 1);
	for (i = 0; i < strlen(str) + 1; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
