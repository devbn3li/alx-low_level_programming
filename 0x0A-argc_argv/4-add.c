#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry Point
 * @argc: int
 * @argv: char
 * Return: 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1;  i < argc; i++)
	{
		char *s = argv[i];

		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] < '0' || s[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
