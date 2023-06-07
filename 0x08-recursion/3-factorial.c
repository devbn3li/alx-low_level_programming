#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: argu
 * Return: always 0 , -1 erorr
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
