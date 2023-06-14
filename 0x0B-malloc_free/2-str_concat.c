#include "main.h"
#include <stdlib.h>
/**
 *
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
	{
		return NULL;
	}

	int len1 = strlen(s1);
	int len2 = strlen(s2);

	char *concat_str = malloc(len1 + len2 + 1);
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}
	for (int i = 0; i < len2; i++)
	{
		concat_str[len1 + i] = s2[i];
	}

	concat_str[len1 + len2] = '\0';
	return concat_str;
}
