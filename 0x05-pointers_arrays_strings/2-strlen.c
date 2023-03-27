#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: a string input
 * Return: length of s
 */
int _strlen(char *s)
{
	int le;

	le = 0;
	while (*s != '\0')
	{
		le++;
		s++;
	}
	return (le);
}
