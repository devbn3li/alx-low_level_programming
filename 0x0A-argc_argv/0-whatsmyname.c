#include <stdio.h>
/**
 * main - program that prints its name
 * @argc: arg count
 * @argv: arg vector
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
