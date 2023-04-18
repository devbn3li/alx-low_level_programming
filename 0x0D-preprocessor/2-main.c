#include <stdio.h>
/**
 * main - Program compilation starts from the main
 * Description: program prints the name of the file it was comipiled from
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
