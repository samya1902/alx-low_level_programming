#include "main.h"
/**
 * _isupper - check a caracter if is uppercase
 * @c: caracter to be checked
 * return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
