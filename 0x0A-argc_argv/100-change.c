#include <stdio.h>
/**
 * main - main function
 * @argc: arg count
 * @argv: arg vector
 */
int main(int argc, char *argv[])
{

	if (argc < 0)
	{
		printf("0\n");
	}

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
}
