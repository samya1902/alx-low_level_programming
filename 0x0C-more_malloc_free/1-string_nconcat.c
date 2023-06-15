#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 * Return: a pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	if (n < l2)
		p = malloc(sizeof(char) * (l1 + n + 1));
	else
		p = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!p)
		return (NULL);
	while (i < l1)
	{
		p[i] = s1[i];
		i++;
	}
	while (n < l2 && i < (n + l1))
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	while (n >i= l2 && i < (l1 + l2))
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
