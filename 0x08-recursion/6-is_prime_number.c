#include <stdio.h>
int is_prime(int n, int m);
/**
 * is_prime_number - check if an int is prime
 * @n: integer
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}
/**
 * is_prime - check if an int is prime recursively
 * @n: integer
 * @m: iterator
 * Return: 1 or 0
 */
int is_prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (is_prime(n, m - 1));
}
