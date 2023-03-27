#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * @s: string input
 * Return: void
 */
void print_rev(char *s)
{
	int le;
	int i;

	le = 0;
	while (*s != '\0')
	{
		le++;
		s++;
	}
	s--;
	for (i = le; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
