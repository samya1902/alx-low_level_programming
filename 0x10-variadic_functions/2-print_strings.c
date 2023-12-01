#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings followed by new line
 * @separator: spearator
 * @n: nbrs of parameters
 * @...: parameters
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(strings, n);
	while (i--)
	{
		printf("%s%s", (str = va_arg(strings, char*)) ? str : "(nil)",
				i ? (separator ? separator : "") : "");
		printf("\n");
	}
	va_end(strings);
}
