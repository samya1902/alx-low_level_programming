#include "main.h"
/**
 * _islower - check if a letter is lowercase
 * @c: the caracter to be checked
 * Return: 1 if lower, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
