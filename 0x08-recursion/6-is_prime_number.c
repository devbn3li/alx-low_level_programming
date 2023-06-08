/**
 * prime_number - check prime number
 * @n: num to check it
 * @k: fac
 *
 * Return: 1 if the input integer is a prime number, 0  not
 */
int prime_number(int n, int k)
{
	if (n == k)
		return (1);

	if (n % k == 0)
		return (0);
	if (n < 0)
		return (prime_number(n, k - 1));
	else
		return (prime_number(n, k + 1));
}

/**
 * is_prime_number - check prime number
 * @n: num to check it
 *
 * Return: 1 if the input integer is a prime number, 0  not
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);

	return (prime_number(n, 2));
}
