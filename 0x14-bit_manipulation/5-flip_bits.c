#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to 
 * flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, nb = 0;
	unsigned long int c;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = ex >> i;
		if (c & 1)
			nb++;
	}
	return (nb);
}
