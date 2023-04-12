#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates a duplicate of a string
 *
 * @str: pointer to the string to be duplicated
 *
 * Return: pointer to the newly created string, or NULL if the allocation fails
 */
char *_strdup(char *str)
{
	char *strdup;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	strdup = malloc(sizeof(char) * (len + 1));

	if (strdup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		strdup[i] = str[i];

	return (strdup);
}
