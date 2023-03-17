#include <stdio.h>
/**
 * main - Entry point
 * prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base16;

	for (base16 = 48; base16 <= 57; base16++)
	{
		putchar(base16);
	}
	for (base16 = 97; base16 <= 102; base16++)
	{
		putchar(base16);
	}
	putchar('\n');
	return (0);
}
