#include "main.h"
/**
 * print_alphabet_x10 - Entry Point
 * Return: 0 (Sucess)
 */
void print_alphabet_x10(void)
{
	int j = 0;
	char alpha;

	while (j < 10)
	{
	alpha = 'a';
	while (alpha <= 'z')
	{
	_putchar(alpha);
	alpha++;
	}
	_putchar('\n');
	j++;
	}
}
