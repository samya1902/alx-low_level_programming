#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that  returns a pointer to a new string which 
 * is a duplicate of the string str.
 * @str: string to duplicate
 * Return: point to string
 */
char *_strdup(char *str)
{
	char *p;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str != '\0')
	{
		i++;
	}
	p = (char *) malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
