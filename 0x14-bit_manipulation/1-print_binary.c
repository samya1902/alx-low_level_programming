#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, nb = 0;
	unsigned long int c;

	for (i = 63; i >= 0; i--)
	{
		c = n >> i;
		if (c & 1)
		{
			_putchar('1');
			nb++;
		}
		else if (nb)
			_putchar('0');
	}
	if (!nb)
		_putchar('0');
}
