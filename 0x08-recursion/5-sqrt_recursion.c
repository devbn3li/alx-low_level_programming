#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: num to get it square
 * Return: square root , -1 erorr
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (squar(n, 0));
}
/**
 * squar - find the natural square root of a number
 * @n: num to check
 * @sqrt: check square
 * Return: square root , -1 erorr
 */
int squar(int n, int sqrt)
{
	if (sqrt > n)
		return (-1);

	if (sqrt * sqrt == n)
		return (sqrt);

	return (squar(n, sqrt + 1));
}
