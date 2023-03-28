#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: string input
 * Return: void
 */
void rev_string(char *s)
{
	char rev = s[0];
	int i;
	int co = 0;

	while (s[co] != '\0')
		co++;
	for (i = 0; i < co; i++)
	{
		co--;
		rev = s[i];
		s[i] = s[co];
		s[co] = rev;
	}
}
