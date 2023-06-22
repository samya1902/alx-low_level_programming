#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - printf number followed by new line
 * @separator: string separator
 * @n: nbr of parameters
 * @...: variable nbr of parameters
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nbs;
	int i;

	va_start(nbs, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nbs, int));
		if ((i != (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(nbs);
}
