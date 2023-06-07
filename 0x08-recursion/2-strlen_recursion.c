#include "main.h"
/**
 * int _strlen_recursion - return length of a string
 * @s: string input
 * Return: length integer
 */
int _strlen_recursion(char *s)
{
	int len = 0;
	
	if (*s)
	{
		len++;
		len = _strlen_recursion(s +1);
	}
	return len;
}
