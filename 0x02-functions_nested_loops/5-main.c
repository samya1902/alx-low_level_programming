#include "main.h"
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int nb;

	nb = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(nb + '0');
	_putchar('\n');
	nb = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(nb + '0');
	_putchar('\n');
	return (0);
}
