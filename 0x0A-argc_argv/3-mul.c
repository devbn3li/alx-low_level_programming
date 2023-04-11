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
	int nbr, nbr1, res;


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	nbr = atoi(argv[1]);
	nbr1 = atoi(argv[2]);
	res = nbr * nbr1;
	printf("%d\n", res);
	return (0);
}
