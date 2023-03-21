#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: a number
 * Return: last digit
 */
int print_last_digit(int n)
{
	int nb;

	if (n < 0)
		n = -n;
	nb = n % 10;
	if (nb < 0)
		nb = -nb;
	_putchar(nb + '0');
	return (nb);
}
