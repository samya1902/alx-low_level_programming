#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min integer
 * @max: max integer
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *p;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * (size));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		p[i] = min++;
	}
	return (p);
}
