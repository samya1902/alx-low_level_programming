#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: integer input
 * @n: integer input
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int c;

	for (; i < n--; i++)
	{
		c = a[i];
		a[i] = a[n];
		a[n] = c;
	}
}
