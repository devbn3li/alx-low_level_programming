#include <stdio.h>
/**
 * main - Entry point
 * Prints all the letters except q and e letters.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		} else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
