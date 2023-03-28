#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string input
 * Return: void
 */
void puts_half(char *str)
{
	int l = 0;
	int n;
	int i;

	while (*str != '\0')
	{
		str++;
		l++;
	}
	l--;
	if (l % 2 != 0)
	{
		n = (l - 1) / 2;
	}
	else
		n = l / 2;
	for (i = n; i < l; i++)
		_putchar(str[i]);
	_putchar('\n');
}
