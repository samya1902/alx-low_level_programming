#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * s1: first string
 * s2: second string
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	concat = (char *) malloc(sizeof(char) * (i + j + 1));
	if (concat == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		j++;
		i++;
	}
	concat[i] = '\0';
	return (concat);
}
