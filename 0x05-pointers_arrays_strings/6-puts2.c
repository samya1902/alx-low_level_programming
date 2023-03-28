#include "main.h"
/**
 * puts2 -  prints every other character of a string
 * starting with the first character followed by a new line
 * @str: input
 * Return: void
 */
void puts2(char *str)
{
	int l;
	int i;
	int lo;
	char *s = str;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	lo = l - 1;
	for (i = 0; i <= lo; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
