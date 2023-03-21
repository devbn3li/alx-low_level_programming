#include "main.h"
/**
 * print_alphabet - prints out the alphabet
 * written by Bn 3li
 * Return: 0 if succesful
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
