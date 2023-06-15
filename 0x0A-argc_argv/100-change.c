#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * make_change - change function
 * @cents: cent num
 *
 * Return: num coins
 */
int make_change(int cents)
{
	if (cents < 0)
	{
		return (0);
	}

	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = 0;

	for (int i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
	}

	return num_coins;
}
/**
 * main - main function
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 if pass
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		int result = make_change(cents);
		printf("%d\n", result);
	}

	return (0);
}
