#include "main.h"
/**
 * _sq_recursion - natural square root
 * @n: integer input
 * @a: integer
 * Return: square root
 */
int _sq_recursion(int n, int a)
{
        if (a * a > n)
                return (-1);
        if (a * a == n)
                return (a);
        return (_sq_recursion(n, a + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer input
 * Return; square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sq_recursion(n, 0));
}
