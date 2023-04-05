#include "main.h"
/**
 * factorial - return a factorial of a number
 * @n: integer input
 * Return: interger
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial (n - 1));
}
