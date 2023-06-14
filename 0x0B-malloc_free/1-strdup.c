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
	copy = malloc((int)strlen(str) + 1);

	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (int)strlen(str) + 1; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
}
