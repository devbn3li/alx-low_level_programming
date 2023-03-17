#include <stdio.h>
/**
 * main - Entry point
 * prints the lowercase alphabet in reverse.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
