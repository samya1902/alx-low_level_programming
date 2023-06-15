#include "main.h"
#include <stdlib.h>
/**
 * _memset - fill memory with constant
 * @s: pointer
 * @b: constatnt
 * @n: nb bytes
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p;

	p = s;
	while (n--)
		*s++ = b;
	return (p);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: element size
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
