#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: the first string to concatenate.
 * @s2: the second string to concatenate.
 *
 * Return: on success, a pointer to the newly allocated string is returned.
 * on failure, NULL is returned.
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int lens1 = 0;
	int lens2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[lens1] != '\0')
		lens1++;

	while (s2[lens2] != '\0')
		lens2++;

	s3 = malloc(sizeof(char) * (lens1 + lens2 + 1));

	if (s3 == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		s3[i + j] = s2[j];
		j++;
	}

	s3[i + j] = '\0';
	return (s3);
}
