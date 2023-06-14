#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: seconed string
 *
 * Return: two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1, len2;
	char *concat_str;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	concat_str = malloc(len1 + len2 + 1);

	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		concat_str[len1 + j] = s2[j];
	}

	concat_str[len1 + len2] = '\0';
	return (concat_str);
}
