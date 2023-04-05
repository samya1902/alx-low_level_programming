#include "main.h"
/**
 * _strlen_recursion - return the length of a string
 * @s: input
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
