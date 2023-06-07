#include "main.h"
/**
 * _prime_number - calculate if a number is prime
 * @n: input number
 * @a: integer
 * Return: 1 if n is prime, otherwise 0
 */
int _prime_number(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return(_prime_number(n, a - 1));
}
/**
 * is_prime_number - returns 1 if the input integer is 
 * a prime number, otherwise return 0.
 * @n: integer
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_number(n, n - 1));
}
