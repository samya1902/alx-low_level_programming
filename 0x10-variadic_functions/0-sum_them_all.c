#include "variadic_functions.h"
#include <stdarg>
/**
 * sum_them_all - all parameters sum
 * @n: nbr of parameters
 * @...: variable nbr of parameter
 * Return: 0 if n = 0, otherwise sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum = 0;

	va_start(a, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(a, int);
	va_end(a);
	return (sum);
}
